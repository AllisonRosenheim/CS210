//  ________________________
// |    Allison Rosenheim   |
// |    CS-210              |
// |    02/14/26            |
//  ------------------------

//UserInputAndMenu displays the initial menu to the user and accepts user input for:
//     -initial investment amount
//     -monthly deposit
//     -annual interest
//     -number of years

//after all 4 values are recieved as user input, a YearlyInvestmentCalculations object is created for every year in the number of years the user enters
//the number of years the user inputs determines the size of the AllEndOfYearInvestments vector

//UserInputAndMenu.cpp contains the displayMenu function definition and recieves user input into a YearlyInvestmentCalculations object using setter member functions

#include <iostream>
#include "UserMenuAndInput.h"
#include "YearlyInvestmentCalculations.h"
#include "AllEndOfYearInvestments.h"
#include <string>
using namespace std;

//input verification -> function local to only this file so 'static' is added
//t_ for function parameters
static double checkDoubleInput(string t_prompt, double& value) {
	string input;

	while (true) {
		cout << t_prompt;
		cin >> input;

		if (input == "q") { return false; }

		try {
			//stod converts string -> double
			value = stod(input);
			return true;
		}
		//'...' means catch any error
		catch (...) {
			cout << "Invalid input. Please enter a decimal number or type q to quit." << endl;
		}
	}
}
static double checkIntInput(string t_prompt, int& value) {
	string input;

	while (true) {
		cout << t_prompt;
		cin >> input;

		if (input == "q") { return false; }

		try {
			//stoi converts string -> int
			value = stoi(input);
			return true;
		}
		//'...' means catch any error
		catch (...) {
			cout << "Invalid input. Please enter an integer or type q to quit." << endl;
		}
	}
}

bool displayMenuAndGetInput() {

	//menu display out to user vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "~~~~~~~~~~~~vvV Enter Values Below: Vvv~~~~~~~~~~~~" << endl;

	double initialInvestmentAmount; //= checkNumberInput("~Initial Investment Amount: ");
	double monthlyDeposit; //= checkNumberInput("~Monthly Deposit: ");
	double annualInterest; //= checkNumberInput("~Annual Interest: ");
	int numYears; //= checkNumberInput("~Number of Years: ");

	if (!checkDoubleInput("~Initial Investment Amount: ", initialInvestmentAmount)) { return false; }
	if (!checkDoubleInput("~Monthly Deposit: ", monthlyDeposit)) { return false; }
	if (!checkDoubleInput("~Annual Interest: ", annualInterest)) { return false; }
	if (!checkIntInput("~Number of Years: ", numYears)) { return false; }

	cout << "Press q to quit . . ." << endl;

	//variable declarations to be used in loops
	double yearEndBalance = initialInvestmentAmount;
	double yearEndEarnedInterest = 0.0;
	double userMonthlyDeposit = monthlyDeposit;

	//display without deposits table vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
	cout << endl;
	cout << "  vvV Balance & Interest Without Monthly Deposits Vvv" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Year: " << "    " << "Year End Balance: " << "    " << "Year End Earned Interest: " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		//without monthly deposit
	AllEndOfYearInvestments yearsNoDeposits;
	for (unsigned i = 1; i <= numYears; ++i) {

		double yearEndEarnedInterest = 0.0;

		for (int month = 0; month < 12; ++month) {
			
			double monthlyInterest = yearEndBalance * (annualInterest / 100.0 / 12.0);
			yearEndBalance += monthlyInterest;
			yearEndEarnedInterest += monthlyInterest;
		}

		yearsNoDeposits.AddYear(i, yearEndBalance, yearEndEarnedInterest);
		yearsNoDeposits.GetYear(i - 1).print();
		cout << endl;

	}

	//display with deposits table vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
	cout << endl;
	cout << " vvV Balance & Interest With Additional Monthly Deposits Vvv" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Year: " << "    " << "Year End Balance: " << "    " << "Year End Earned Interest: " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		//with additional monthly deposit
	AllEndOfYearInvestments yearsDeposits;
	yearEndBalance = initialInvestmentAmount; 

	for (unsigned i = 1; i <= numYears; ++i) {

		double yearEndEarnedInterest = 0.0;

		for (int month = 0; month < 12; ++month) {
			yearEndBalance += userMonthlyDeposit;
			double monthlyInterest = yearEndBalance * (annualInterest / 100.0 / 12.0);
			yearEndBalance += monthlyInterest;
			yearEndEarnedInterest += monthlyInterest;
		}

		yearsDeposits.AddYear(i, yearEndBalance, yearEndEarnedInterest);
		yearsDeposits.GetYear(i - 1).print();
		cout << endl;
	}

	cout << endl;
	cout << "Type q to quit, or enter new values below." << endl;
	



	
}