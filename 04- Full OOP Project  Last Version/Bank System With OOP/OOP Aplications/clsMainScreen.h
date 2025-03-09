#pragma once
#include<iostream>
#include<iomanip>
#include"clsScreen.h"
#include"clsAddNewClientScreen.h"
#include"clsClientListScreen.h"
#include"clsDeleteClientScreen.h"
#include"clsUpdateClientScreen.h"
#include"clsFindClientScreen.h"
#include"clsTransactionsScreen.h"
#include"clsManageUsersScreen.h"
#include"clsInputValidate.h"
#include"clsLoginRegisterScreen.h"
#include"Global.h"


class clsMainScreen : protected clsScreen
{
private:
    enum enMainMenueOptions {
        eAllclientList = 1, eAddNewClient = 2,
        eDeleteClient = 3, eUpdateClient = 4,
        eFindClient = 5, eShowTransactionMenue = 6,
        eMangeUsers = 7, eRegisterLogin=8, eExit = 9
    };
    static void _GoBacktoMainMenue()
    {
        cout << setw(37) << left << "" << "\n\tPress any key to go back to Main Menue...\n";

        system("pause>0");
        ShowMainMenue();
    }
    static short _ReadMainMenueOption()
    {
           cout << setw(37) << left << "" << "Choose what do you want to do? [1 to 9]? ";
           short Choice = clsInputValidate::ReadShortNumberBetween(1, 9, "Enter Number between 1 to 9? ");
           return Choice;

    }
    static void _ShowAllClientListScreen()
       {
        clsClientListScreen::ShowClientsList();
       }
    static void _ShowAddClientsScreen()
       {
           clsAddNewClientScreen::ShowAddNewClientScreen();
       }
    static void _ShowDeleteClientsScreen()
       {
          /* cout << "Delete Clients Screen is not here at the moment , come back later .....";*/
           clsDeleteClientScreen::ShowDeleteClientScreen();
       }
    static void _ShowUpdateClientsScreen()
       {
        clsUpdateClientScreen::ShowUpdateClientScreen();
       }
    static void _ShowFindClientsScreen()
       {
           clsFindClientScreen::ShowFindClientScreen();
       }
    static void _ShowTransactiosScreen()
       {
           clsTransactionsScreen::ShowTransactionsMenue();
       }
    static void _ShowManageUsersScreen()
       {
            clsManageUsersScreen::ShowManageUsersMenue();

       }
    static void _ShowLoginRegisterScreen()
       {
        clsLoginRegisterScreen::ShowLoginRegisterScreen();
    }

    static void _Logout()
    {
        CurrentUser = clsUser::Find("", "");
    }
    static  void _PerfromMainMenueOption(enMainMenueOptions Option)
    {
        switch (Option)
        {
        case enMainMenueOptions::eAllclientList:
            system("cls");
            _ShowAllClientListScreen();
            _GoBacktoMainMenue();
            break;
        case enMainMenueOptions::eAddNewClient:
            system("cls");
            _ShowAddClientsScreen();
            _GoBacktoMainMenue();
            break;
        case enMainMenueOptions::eDeleteClient:
            system("cls");
            _ShowDeleteClientsScreen();
            _GoBacktoMainMenue();
            break;
        case enMainMenueOptions::eUpdateClient:
            system("cls");
            _ShowUpdateClientsScreen();
            _GoBacktoMainMenue();
            break;
        case enMainMenueOptions::eFindClient:
            system("cls");
            _ShowFindClientsScreen();
            _GoBacktoMainMenue();
            break;
        case enMainMenueOptions::eShowTransactionMenue:
            system("cls");
            _ShowTransactiosScreen();
            _GoBacktoMainMenue();
            break;
        case enMainMenueOptions::eMangeUsers:
            system("cls");
            _ShowManageUsersScreen();
            _GoBacktoMainMenue();
            break;
        case enMainMenueOptions::eRegisterLogin:
            system("cls");
            _ShowLoginRegisterScreen();
            _GoBacktoMainMenue();
            case enMainMenueOptions::eExit:
            system("cls");
            _Logout();
            
            break;
        default:
            break;
        }
    }
public:

    static void ShowMainMenue()
    {

        system("cls");
        _DrawScreenHeader("\t\tMain Screen");

        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t\t\tMain Menue\n";
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t[1] Show Client List.\n";
        cout << setw(37) << left << "" << "\t[2] Add New Client.\n";
        cout << setw(37) << left << "" << "\t[3] Delete Client.\n";
        cout << setw(37) << left << "" << "\t[4] Update Client Info.\n";
        cout << setw(37) << left << "" << "\t[5] Find Client.\n";
        cout << setw(37) << left << "" << "\t[6] Transactions.\n";
        cout << setw(37) << left << "" << "\t[7] Manage Users.\n";
        cout << setw(37) << left << "" << "\t[8] Login Register Screen.\n";
        cout << setw(37) << left << "" << "\t[9] Logout.\n";
        cout << setw(37) << left << "" << "===========================================\n";

        _PerfromMainMenueOption((enMainMenueOptions)_ReadMainMenueOption());
    }


};

