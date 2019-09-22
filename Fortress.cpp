#include <iostream>
#include <cstring>

#include <vector>
#include <iterator>
#include <map>
using namespace std;

#include <stdlib.h>
#include <conio.h>

map<string, string> Codes;

string GetPass(int Protect)
{
    string PassWord = "";
    char C;
    while (true)
    {
        C = getch();
        if (C == 13) break;
        PassWord += C;
        if (!Protect) cout << C;
        else cout << '*';
    }
    return PassWord;
}

void ReMake()
{
    string Arg = " ";
    for (map<string,string>::iterator I = Codes.begin(); I != Codes.end(); I++)
    {
        Arg += '"' + I->first + '"' + ' ';
        Arg += '"' + I->second + '"' + ' ';
    }
    Arg = "Healer" + Arg;
    system(Arg.c_str());
    return;
}

void NewUser()
{
    cout << "Hello New User !" << endl;
    
    string MainPass;
    while (true)
    {
        cout << "Please enter a Verification Key :" << endl;
        MainPass = GetPass(1); cout << endl;
        cout << "Please confirm your Verification Key :" << endl;
        string Confirm = GetPass(1); cout << endl;

        if (!strcmp(MainPass.c_str(), Confirm.c_str())) break;

        cout << endl << "Verification Key mismatch. Please enter them again." << endl << endl;
    }
    

    Codes["SELF"] = MainPass;
    ReMake();
    return;
}

int main(int argc, char** argv)
{
    cout << "Fortress v1.0" << endl;
    //
    //
    int Ln = 0;
    for (map<string,string>::iterator I = Codes.begin(); I != Codes.end(); I++) Ln++;

    if (Ln == 0)
    {
        cout << "New User detected. Starting initialisation process." << endl;
        NewUser();
        cout << endl << "Procedure complete. Fortress will now reboot." << endl;
        return 7;
    }

    cout << "Please enter you Verification Key :"<< endl;
    string Key = GetPass(1); cout << endl;
    if (strcmp(Key.c_str(), (Codes.find("SELF")->second).c_str()))
    {
        cout << "Incorrect Verification Key." << endl << "Fortress will now exit." << endl;
        return -1;
    }

    cout << endl << "Welcome User !" << endl << endl;

    while (true)
    {
        cout << "Please select an operation :" << endl << "0) Exit" << endl << "1) Charge Password Field" << endl << "2) View stored Keys" << endl <<"3) Add new Password" << endl << "4) Remove a Password." << endl <<  "5) Generate Dump file" << endl << "-> ";
        
        int Action;
        cin >> Action;
        if (Action == 0)
        {
            cout << "Fortress safely exiting." << endl;
            return 0;
        }
        else if (Action == 1)
        {
            cout << "Preparing to Charge Password Field..." << endl;
            cout << "Enter Key to charge : ";
            string KeyS = GetPass(0); cout << endl;

            if (Codes.find(KeyS) != Codes.end())
            {
                string Arg = " ";
                string Word = Codes[KeyS];
                char Ch;
                
                Arg += '"';
                for (int I=0; I<Word.length(); I++)
                {
                    Ch = Word[I];
                    if (Ch == '"')
                    {
                        Arg += '"';
                        Arg += ' ';
                        Arg += '"';
                    }
                    else
                        Arg += Ch;
                }
                Arg += '"';
                Arg = "Warrior" + Arg;
                system(Arg.c_str());
                cout << "Charge Complete." << endl << endl;
            }
            else
            {
                cout << "Invalid Key has been entered." << endl << endl;
            }
        }
        else if (Action == 2)
        {
            cout << "Opening stored keys..." << endl;
            for (map<string,string>::iterator I = Codes.begin(); I != Codes.end(); I++)
            {
                if (!strcmp("SELF", I->first.c_str())) continue;
                cout << "\t" << I->first << endl;
            }
            cout << "Search complete. Stored keys are shown above." << endl;
            cout << endl;
        }
        else if (Action == 3)
        {
            cout << "Adding new Password..." << endl;
            
            cout << "\tPlease enter a new Key : ";
            string NKey = GetPass(0); cout << endl;

            bool Contest = false;
            for (map<string,string>::iterator I = Codes.begin(); I != Codes.end(); I++)
                if(!strcmp(NKey.c_str(), I->first.c_str())) Contest = true;
            if (Contest)
            {
                cout << "The Key is contested. You must enter a different key."<< endl << endl;
                continue;
            }

            cout << "\tPlease enter a new Password : ";
            string NPas = GetPass(1); cout << endl;

            Codes[NKey] = NPas;
            cout << endl << "Procedure complete. Fortress will now reboot." << endl;
            ReMake();
            return 7;            
        }
        else if (Action == 4)
        {

        }
        else if (Action == 5)
        {

        }
        else
        {
            cout << "Invalid Operation !" << endl << endl;
        }
    }
    

    return 0;
}