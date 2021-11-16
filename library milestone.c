/*
Users-view user,add new user,edit,delete,login,change password
Catalogue
Insuarence
Serial
Acquisition


Navigation
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int menu();
int main()
{
    int action;
    action = menu();
    //execute action
    return 0;
}
int menu()
{
   int action;
do {

        printf("Welcome friends\n");

        printf("What would you like to do\n");

        printf("1.View user\n");

        printf("2.Add new user\n");

        printf("3.Edit user\n");

        printf("4.Delete user\n");

        printf("5.Change password\n");

        printf("6.Logout\n");

        printf("7.Exit\n");

        printf("Selected action(1-7): ");

        scanf("%d",&action);
        if(action<1 || action>7){
            system("cls");
            printf("Invalid action.Try again");
        }
}while(action<1 || action>7);


}
