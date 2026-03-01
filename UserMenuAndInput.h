
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

//UserInputAndMenu declares displayMenuAndGetInput function

#ifndef AIRGEADBANKINGSTUDENTINVESTMENTS_USERMENUANDINPUT_H_
#define AIRGEADBANKINGSTUDENTINVESTMENTS_USERMENUANDINPUT_H_
#pragma once

bool displayMenuAndGetInput();
#endif