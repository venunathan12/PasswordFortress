#include <iostream>
using  namespace std;
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    string L = "#include <iostream>\n#include <cstring>\n\n#include <vector>\n#include <iterator>\n#include <map>\nusing namespace std;\n\n#include <stdlib.h>\n#include <conio.h>\n\nmap<string, string> Codes;\n\nstring GetPass(int Protect)\n{\n    string PassWord = XX;\n    char C;\n    while (true)\n    {\n        C = getch();\n        if (C == 13) break;\n        PassWord += C;\n        if (!Protect) cout << C;\n        else cout << '*';\n    }\n    return PassWord;\n}\n\nvoid ReMake()\n{\n    string Arg = X X;\n    for (map<string,string>::iterator I = Codes.begin(); I != Codes.end(); I++)\n    {\n        Arg += 'X' + I->first + 'X' + ' ';\n        Arg += 'X' + I->second + 'X' + ' ';\n    }\n    Arg = XHealerX + Arg;\n    system(Arg.c_str());\n    return;\n}\n\nvoid NewUser()\n{\n    cout << XHello New User !X << endl;\n    \n    string MainPass;\n    while (true)\n    {\n        cout << XPlease enter a Verification Key :X << endl;\n        MainPass = GetPass(1); cout << endl;\n        cout << XPlease confirm your Verification Key :X << endl;\n        string Confirm = GetPass(1); cout << endl;\n\n        if (!strcmp(MainPass.c_str(), Confirm.c_str())) break;\n\n        cout << endl << XVerification Key mismatch. Please enter them again.X << endl << endl;\n    }\n    \n\n    Codes[XSELFX] = MainPass;\n    ReMake();\n    return;\n}\n\nint main(int argc, char** argv)\n{\n    cout << XFortress v1.0X << endl;\n    //\n";
    string R = "    //\n    int Ln = 0;\n    for (map<string,string>::iterator I = Codes.begin(); I != Codes.end(); I++) Ln++;\n\n    if (Ln == 0)\n    {\n        cout << XNew User detected. Starting initialisation process.X << endl;\n        NewUser();\n        cout << endl << XProcedure complete. Fortress will now reboot.X << endl;\n        return 7;\n    }\n\n    cout << XPlease enter you Verification Key :X<< endl;\n    string Key = GetPass(1); cout << endl;\n    if (strcmp(Key.c_str(), (Codes.find(XSELFX)->second).c_str()))\n    {\n        cout << XIncorrect Verification Key.X << endl << XFortress will now exit.X << endl;\n        return -1;\n    }\n\n    cout << endl << XWelcome User !X << endl << endl;\n\n    while (true)\n    {\n        cout << XPlease select an operation :X << endl << X0) ExitX << endl << X1) Charge Password FieldX << endl << X2) View stored KeysX << endl <<X3) Add new PasswordX << endl << X4) Remove a Password.X << endl <<  X5) Generate Dump fileX << endl << X-> X;\n        \n        int Action;\n        cin >> Action;\n        if (Action == 0)\n        {\n            cout << XFortress safely exiting.X << endl;\n            return 0;\n        }\n        else if (Action == 1)\n        {\n            cout << XPreparing to Charge Password Field...X << endl;\n            cout << XEnter Key to charge : X;\n            string KeyS = GetPass(0); cout << endl;\n\n            if (Codes.find(KeyS) != Codes.end())\n            {\n                string Arg = X X;\n                string Word = Codes[KeyS];\n                char Ch;\n                \n                Arg += 'X';\n                for (int I=0; I<Word.length(); I++)\n                {\n                    Ch = Word[I];\n                    if (Ch == 'X')\n                    {\n                        Arg += 'X';\n                        Arg += ' ';\n                        Arg += 'X';\n                    }\n                    else\n                        Arg += Ch;\n                }\n                Arg += 'X';\n                Arg = XWarriorX + Arg;\n                system(Arg.c_str());\n                cout << XCharge Complete.X << endl << endl;\n            }\n            else\n            {\n                cout << XInvalid Key has been entered.X << endl << endl;\n            }\n        }\n        else if (Action == 2)\n        {\n            cout << XOpening stored keys...X << endl;\n            for (map<string,string>::iterator I = Codes.begin(); I != Codes.end(); I++)\n            {\n                if (!strcmp(XSELFX, I->first.c_str())) continue;\n                cout << X\tX << I->first << endl;\n            }\n            cout << XSearch complete. Stored keys are shown above.X << endl;\n            cout << endl;\n        }\n        else if (Action == 3)\n        {\n            cout << XAdding new Password...X << endl;\n            \n            cout << X\tPlease enter a new Key : X;\n            string NKey = GetPass(0); cout << endl;\n\n            bool Contest = false;\n            for (map<string,string>::iterator I = Codes.begin(); I != Codes.end(); I++)\n                if(!strcmp(NKey.c_str(), I->first.c_str())) Contest = true;\n            if (Contest)\n            {\n                cout << XThe Key is contested. You must enter a different key.X<< endl << endl;\n                continue;\n            }\n\n            cout << X\tPlease enter a new Password : X;\n            string NPas = GetPass(1); cout << endl;\n\n            Codes[NKey] = NPas;\n            cout << endl << XProcedure complete. Fortress will now reboot.X << endl;\n            ReMake();\n            return 7;            \n        }\n        else if (Action == 4)\n        {\n\n        }\n        else if (Action == 5)\n        {\n\n        }\n        else\n        {\n            cout << XInvalid Operation !X << endl << endl;\n        }\n    }\n    \n\n    return 0;\n}";
    string M = "";

    if (argc > 1)
        for (int I = 1; I < argc; I += 2)
        {
            M += "    Codes[X" + string(argv[I]) + "X] = X" + string(argv[I+1]) + "X;\n";
        }

    FILE* Source = fopen("Source.cpp", "w");    
    M = L + M + R;
    char C;
    for (int I = 0; I < M.length(); I++)
    {
        C = M[I];
        if (C == 'X')
            C = '"';
        fprintf(Source, "%c", C);
    }
    fclose(Source);

    system("g++ -o Source Source.cpp");

    return 0;
}