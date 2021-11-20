#pragma once
#include "Account.h"
#include <float.h>
#include <iostream>
#include <iomanip>
#include <math.h>

class SavingsAccount :public Account
{
private:
	float interestRate;
public:

	SavingsAccount() {interestRate= 0.05;}

	SavingsAccount(double init_bal,float rate) :Account(balance=init_bal) {
		interestRate=rate;

		//rate =init_bal* interestRate;
		
		//rate = init_bal; //interestRate=balance;
		//balance = init_bal;
		


		


	}

	double CalcInterest();





};

