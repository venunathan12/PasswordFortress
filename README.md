# PasswordFortress

## Instructions for Installation

#### Note : This project can be installed only on Windows devices. This will be chhanged in a later update.

To install the project, open Command Prompt in the folder containing these files, and execute the following commands:
```
g++ -o FrontLine FrontLine.cpp
g++ -o Fortress Fortress.cpp
g++ -o Healer Healer.cpp
g++ -o Warrior Warrior.cpp
```
Depending on your installation of g++, you may or may not need the 'libstdc++-6.dll' file in the folder during installation of the project.<br>
After the installation, make sure that all the generated exe files have the permission to read, write, create and delete files in that folder. Usually, they have the needed permissions by default.

## Instructions for Use

PasswordFortress is a password manager which stores you passwords securely within the source of the application.

Run FrontLine.exe to launch the project.

When you use launch PasswordFortress for the first time, you will be asked to enter a new Verification Key.<br>
This Verification Key will be your password to open PasswordFortress in future launches, which you must remember.<br>
After you enter the Verification Key for the first time, the application will reboot.

After the first launch, the application will ask you which operation you wish to perform. You should see something similar to this.
```
Welcome User !

Please select an operation :
0) Exit
1) Charge Password Field
2) View stored Keys
3) Add new Password
4) Remove a Password.
5) Generate Dump file
->
```

To store a new password, select option 3.<br>
You will be asked to enter a Key and the Password. The Key will be used to identify the password.

To see a list of all saved Keys, select option 2.<br>

To write the stored password onto a text field, select option 1.<br>
You will be asked to enter the Key of the password.<br>
After you enter the Key, you will be given 2 seconds to select a textbox. After 2 seconds, virtual keyboard inputs will write the stored password to the selected textbox.

The remaining options are present not functional, they will be updated later.

### Important Notice
The following rules apply to all stored passwords, including the Verification Key.

* The passwords being stored cannot contain the following three characters:<br>
`  '    "    X  `

* Also, backspace must never be used while entering a password. If you make a mistake while entering the password, please reboot the application. This will be fixed in future updates.

#### Note
I know that the passwords being stored can be revealed using strings. It will be fixed in a future update.