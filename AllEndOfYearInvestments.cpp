//  ________________________
// |    Allison Rosenheim   |
// |    CS-210              |
// |    02/14/26            |
//  ------------------------

//AllEndOfYearsInvestments is a class containing a vector of YearlyInvestmentCalculations objects
//the purpose of this class is to manage the objects in the vector and to provide organized output to user

//AllEndOfYearsInvestments.cpp contains the class function definitions and class object constructor definitions

#include "AllEndOfYearInvestments.h"
#include <iostream>
#include <vector>
using namespace std;

//function definition for AddYear -> AddYear adds a year object to the AllEndOfYearInvestments object vector
//m_ for member parameters
void AllEndOfYearInvestments::AddYear(int t_yearNum, double t_yearEndBalance, double t_yearEndEarnedInterest) {
	m_years.emplace_back(t_yearNum, t_yearEndBalance, t_yearEndEarnedInterest);

}

//t_ for function parameters
//m_ for member parameters
YearlyInvestmentCalculations& AllEndOfYearInvestments::GetYear(int t_index) {
	return m_years.at(t_index);
}