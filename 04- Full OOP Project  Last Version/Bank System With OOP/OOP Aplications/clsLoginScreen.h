#pragma once
#include<iostream>
#include<string>
#include"clsScreen.h"
#include"clsUser.h"
#include"clsMainScreen.h"
#include"Global.h"


class clsLoginScreen : protected clsScreen
{
	

private:
	
	static bool _Login()
	{
		
	    string UserName;
		string Password;
		short FailedLoginCount = 0;
		bool LoginField = false; 
		do
		{
			
			if (LoginField)
			{
				FailedLoginCount++;
				cout << "\nLogin field , Invalid username or password\n";
				

				if (FailedLoginCount == 3)
				{
					cout << "\nYou Have Tried More Than 3 Times, your Account Has Been Blokced\n";
					return false;
				}
				cout << "you still have " << 3 - FailedLoginCount << " Trails";
					
			}
			
			cout << "\nEnter username: ";
			cin >> UserName;
			cout << "Enter Password: ";
			cin >> Password;
			
			CurrentUser = clsUser::Find(UserName, Password);

			LoginField = CurrentUser.IsEmpty();
			

		} while (LoginField);

		CurrentUser.RegisterLogIn();
		clsMainScreen::ShowMainMenue();

	}

public:
	static bool ShowLoginScreen()
	{
		system("cls");
		_DrawScreenHeader("Login Screen");
		return _Login();
	}
	
};

