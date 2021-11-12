#include "Account.h"

//member functions




Account::Account(double init_bal) {
	if (init_bal >= 1000)
	{
		balance = init_bal;
	}

	else {
		balance = 0;
		std::cout << "invalid amt error message\n";
		exit(1);

	}




	//check init_bal if >= $1000.00

	//if >= $1000.00, set balance to init_bal

	//else set balance to zero, and print invalid amt error message.

}

void Account::setBalance()
{
}

double Account::getBalance()
{
	return balance;
}

double Account::deposit(double amount)
{
	return balance += amount;
}

bool Account::withdrawal(double amount)
{
	return balance -= amount;
}

double deposit(double amount)
{
	return 0.0;
}

/*/bool withdrawal(double amount)
{
	return false;
}*/
