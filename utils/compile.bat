@echo off 
SET TARGET='%~dp0..\arduino-cli'
SET EXE="%~dp0..\arduino-cli\arduino-cli.exe"

SET buildPath="%~dp0..\.build"
SET buildCachePath="%~dp0..build-cache"
SET sourcePath="%~dp0..\firmware"

SET verbose = "-v"


IF "%1%"=="nrf52832" (
    SET fqbn="adafruit:nrf52:feather52832"
)

IF "%1%"=="pca10056" (
    SET fqbn="adafruit:nrf52:pca10056"
)

IF "%1%"=="feather52840" (
    SET fqbn="adafruit:nrf52:feather52840"
)

IF "%1%"=="challenger840" (
    SET fqbn="iLabs:nrf52:challenger_840_ble"
)

IF NOT DEFINED fqbn (
    ECHO ERROR FQBN not set.
    GOTO :options
)

IF EXIST %EXE% (
    %EXE% compile  --fqbn %fqbn% --build-path %buildPath% --build-cache-path %buildCachePath% %sourcePath%/firmware.ino  --output-dir %buildPath%/firmware
) ELSE (
    ECHO arduino-cli not found. Run install.bat first
)
GOTO :end
:options
    ECHO Usage:
    ECHO compile.bat fqbn
    ECHO fqbn options: nrf52832, pca10056, feather52840, challenger840

:end