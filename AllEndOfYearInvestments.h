//  ________________________
// |    Allison Rosenheim   |
// |    CS-210              |
// |    02/14/26            |
//  ------------------------

//AllEndOfYearsInvestments is a class containing a vector of YearlyInvestmentCalculations objects
//the purpose of this class is to manage the objects in the vector and to provide organized output to user

//AllEndOfYearsInvestments.h contains the function declarations and class object constructor declaration

#ifndef AIRGEADBANKINGSTUDENTINVESTMENTS_ALLENDOFYEARINVESTMENTS_H_
#define AIRGEADBANKINGSTUDENTINVESTMENTS_ALLENDOFYEARINVESTMENTS_H_
#pragma once
#include <vector>
#include "YearlyInvestmentCalculations.h"
using namespace std;

//t for function parameters
class AllEndOfYearInvestments {
	public:
		void AddYear(int t_yearNum, double t_yearEndBalance, double t_yearEndEarnedInterest);
		YearlyInvestmentCalculations& GetYear(int t_index);

	//m_ for private data
	private:
		vector <YearlyInvestmentCalculations> m_years;
};
#endif
