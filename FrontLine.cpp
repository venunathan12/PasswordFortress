#include <stdio.h>
#include <stdlib.h>

#include <iostream>
using namespace std;

int main()
{
    printf("FrontLine v1.0\n");
    printf("Strating Fortress.\n\n");

    string Arg = "Fortress";
    
    while(true)
    {
        int Fort = system(Arg.c_str());
        printf("\nFortress exitted with Return Code : %d\n", Fort);

        if (Fort == 0)
        {
            printf("Safe exit. FrontLine will now close.\n");
            return 0;
        }
        else if(Fort == -1)
        {
            printf("Exit due to incorrect Authentication. FrontLine will now close.\n");
            return 0;
        }
        else if(Fort == 7)
        {
            printf("Exit for ReMake. Fortress will reboot.\n\n");
            system("del Fortress.exe");
            system("ren Source.exe Fortress.exe");
            system("del Source.cpp");
        }
        else 
        {
            printf("Unknown Exit. FrontLine will now close.\n");
            return 0;
        }
    }  

    return 0;
}