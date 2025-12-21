# Cambiar al directorio del proyecto
Set-Location C:\HA\ESPHome_VSD

# Activar el entorno virtual
. .\.venv\Scripts\Activate.ps1

# Configurar el remoto upstream si no existe
if (-not (git remote get-url upstream -ErrorAction SilentlyContinue)) {
    git remote add upstream https://github.com/esphome/esphome.git
}

# Traer cambios del upstream
git fetch upstream

# Intentar merge con dev
$mergeResult = git merge upstream/dev 2>&1

# Comprobar si hay conflictos
if ($mergeResult -match "CONFLICT") {
    Write-Host "⚠ Conflictos detectados. Abortando merge automáticamente..." -ForegroundColor Yellow
    git merge --abort
    Write-Host "✅ Merge abortado. No se aplicaron cambios conflictivos." -ForegroundColor Green
} else {
    Write-Host "✅ Merge completado sin conflictos." -ForegroundColor Green
}

# Instalar dependencias
pip install -r requirements.txt

Write-Host "✅ Core ESPHome actualizado correctamente" -ForegroundColor Green
