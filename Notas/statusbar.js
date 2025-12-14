const vscode = require('vscode');

function activate(context) {
    // Botón OTA
    let ota = vscode.window.createStatusBarItem(vscode.StatusBarAlignment.Left, 100);
    ota.text = '$(cloud-upload) OTA';
    ota.tooltip = 'Subir firmware vía OTA';
    ota.command = 'esphome.ota';
    ota.show();

    // Botón USB
    let usb = vscode.window.createStatusBarItem(vscode.StatusBarAlignment.Left, 99);
    usb.text = '$(plug) USB';
    usb.tooltip = 'Subir firmware vía USB';
    usb.command = 'esphome.usb';
    usb.show();

    context.subscriptions.push(ota);
    context.subscriptions.push(usb);

    // Comandos
    context.subscriptions.push(vscode.commands.registerCommand('esphome.ota', () => {
        vscode.window.terminals[0]?.sendText('.\\.venv\\Scripts\\esphome.exe run configs\\test.yaml --upload-port ota');
    }));

    context.subscriptions.push(vscode.commands.registerCommand('esphome.usb', () => {
        vscode.window.terminals[0]?.sendText('.\\.venv\\Scripts\\esphome.exe run configs\\test.yaml --upload-port COM3');
    }));
}

function deactivate() {}

module.exports = {
    activate,
    deactivate
};
