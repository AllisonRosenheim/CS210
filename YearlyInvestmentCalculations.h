//  ________________________
// |    Allison Rosenheim   |
// |    CS-210              |
// |    02/14/26            |
//  ------------------------

//YearlyInvestmentCalculuations is a class that creates a YearlyInvestment object
//the YearlyInvestment object has the attributes yearNumber, yearEndBalance, and yearEndEarnedInterest

//YearlyInvestmentCalculations.h contains the class definition, function declarations, and class object constructor declaration

#ifndef AIRGEDBANKINGSTUDENTINVESTMENTS_YEARLYINVESTMENTCALCULATIONS_H_
#define AIRGEDBANKINGSTUDENTINVESTMENTS_YEARLYINVESTMENTCALCULATIONS_H_
#pragma once
#include <iostream>

class YearlyInvestmentCalculations {
	public:
		//YearlyInvestmentCalculations object constructor
		//t_ for function parameters
		YearlyInvestmentCalculations(int t_year, double t_yearEndBalance, double t_yearEndEarnedInterest);

		void print() const;

//m_ for private data
	private:
		int m_year;
		double m_yearEndBalance;
		double m_yearEndEarnedInterest;

};

#endif