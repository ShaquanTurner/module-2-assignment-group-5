// module 2 assignment group 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//#include <iomanip>
#include "ChequingAccount.h"

#include <math.h>
void showMenu(void);
#include "Account.h"
#include "SavingsAccount.h"
                                 //Shaquan Turner 1817001436 //Novadeen McInnis 2008035530 //Chevon McIntosh 2017001610     //Jahvaughn Binns 2017001833


using namespace std;



int option;
//double balance = 1000.00;

int main() {
	Account cst{2000};
	SavingsAccount sa{1000,0.08};
	ChequingAccount ca; 


	


	do {
		system("cls");
		showMenu();
		cout << "\n:-__-: ";
		cin >> option;

		switch (option)
		{
		case 1: {
			cout << "\n Balance Available  : $" << sa.getBalance() << endl;

			system("pause");
			break;
		}
		case 2: {
			double deposit = 0.0;
			cout << " Amount Deposited : $";
			cin >> deposit;
			sa.deposit(deposit);
		     
			cout << "\n Balance Available  : $" << sa.getBalance() << endl;// when testing the funtionally of derivred class a by use the object class  change the cst. to sa./ca.
			 cout << "\n interrest rate  is :$ " << sa.CalcInterest()<<endl;


			system("pause");

			break;
		}
		case 3: {
			double withdrawal = 0.0;
			cout << " Amount Withdrawn : $";
			cin >> withdrawal;
			if (withdrawal <= cst.getBalance()) {
				//cst.withdrawal(withdrawal);
				ca.withdrawal(withdrawal);
				cout << "\n Balance Available  : $" << cst.getBalance() << endl;
			

			}
			else {
				cout << "Insufficient funds\n\n";
			}
			system("pause");

			break;
		}
		case 0: {
			exit(0);
			break;
		}

		default: cout << " This option is Invalid...\n";
			system("pause");
		}
	} while (option != 0);


	system("pause");
	return 0;
}

void showMenu(void) {

	int option;

	cout << "\n****    MENU OPTIONS    ****\n";
	cout << "****  CHOSE AN OPTION   ****\n\n\n";
	cout << "1. Check Balance \n";
	cout << "2. Make a Deposit\n";
	cout << "3. Make a Withdrawal\n";
	//cout << "4.	\n";
	cout << "0.	EXIT\n\n";
}