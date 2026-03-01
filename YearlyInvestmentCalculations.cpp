//  ________________________
// |    Allison Rosenheim   |
// |    CS-210              |
// |    02/14/26            |
//  ------------------------

//YearlyInvestmentCalculuations is a class that creates a YearlyInvestment object
//the YearlyInvestment object has the attributes yearNumber, yearEndBalance, and yearEndEarnedInterest

//YearlyInvestmentCalculations.cpp contains the class function definitions and class object constructor definitions

#include "YearlyInvestmentCalculations.h"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

//YearlyInvestmentCalculations constructor that recieves values into function parameters, the function parameters correspond to the class object parameters
//m_ for member parameters
YearlyInvestmentCalculations::YearlyInvestmentCalculations(int t_year, double t_yearEndBalance, double t_yearEndEarnedInterest) {
	this->m_year = t_year;
	this->m_yearEndBalance = t_yearEndBalance;
	this->m_yearEndEarnedInterest = t_yearEndEarnedInterest;
}

//formats '$' in the output tables -> local to only this file so 'static' is added
//t_ for function parameters
static string money(double t_x) {
	ostringstream out;
	out << fixed << setprecision(2) << t_x;
	return "$" + out.str();
}

//print function definition
//m_ for member parameters
void YearlyInvestmentCalculations::print() const {
	cout << setw(6) << m_year
		 << setw(20) << money(m_yearEndBalance)
		 << setw(26) << money(m_yearEndEarnedInterest)
		 << endl;
}