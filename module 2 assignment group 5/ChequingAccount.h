#pragma once
#include "Account.h"
class ChequingAccount :public Account
{
private:
	double transactionFee;
public:
	ChequingAccount() { transactionFee=600; }
	ChequingAccount(double init_bal, double fee):Account() {
		fee = init_bal * transactionFee;
		
	
	
	
	
	
	}
	bool withdrawal( double amount);
};

