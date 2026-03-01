# CS210
This repository is used to meet the requirements set out by the module 8 assignment for CS-210. This repository contains the AirGead Banking project completed in module 5.
___________________________________________________________________________________________________________________________________________________________________________________________________
### Project summary and objective:<br>
The AirGead Banking project seeks to implement a tool for students to use that highlights the monetary benefits of investing and investing monthly. The user is prompted to input a starting deposit amount, a
monthly deposit amount, an annual interest rate, and a number of years. The result is the displaying of two output tables: one that includes additional monthly deposits and one that does not. 
____________________________________________________________________________________________________________________________________________________________________________________________________
### Skills highlighted:<br>
The AirGead Banking project highlighted the benefits and simplicity that object oriented programming allows the developer. Using a class vector containing another class' objects simplified the process tremendously.
Learning how to have a class object reference an object in another class' vector object was interesting to learn and required research. Creating static class functions that could repeatably be applied to various class objects simplified output formatting. Structuring outer and inner loops were vital to accomplishing the correct compounding interest values. 
_____________________________________________________________________________________________________________________________________________________________________________________________________
### Places to improve:<br>
I think the current project is a skeleton. I would implement a UI that is friendly and approachable for students and those curious about investing. I would provide links to useful information such as learning about the different types of investment accounts. After this point I would move further to allow the user to select the type of investment account they would like to play around with and structure the display based on the investment account.
______________________________________________________________________________________________________________________________________________________________________________________________________
### Challenges:<br>
At first I had no idea how to approach putting objects with specific attribtes in a vector. I realized structuring the program this way changed how the getters and setters work for the objects in the vector. I needed the GetYear and AddYear AllYearInvestmentYears class functions to be able to access the objects in the vector, but the objects in the vector were of the YearlyInvestmentCalculations class. The logic ended up being referencing the YearlyInvestmentCalculations object that were stored in the container (AllYearInvestment vector). 
______________________________________________________________________________________________________________________________________________________________________________________________________
### Transferable Skills:<br>
I think working with vectors and being able to have vectors of different class objects communicate across classes will be extremely useful in the future. Starting with getting an mvp (minimum viable product) will be something I carry with me as I grow as a developer. Integrating modular development and keeping progress contained and organized will be a great benefit to future projects. 
______________________________________________________________________________________________________________________________________________________________________________________________________
### Resources used:<br>
https://youtu.be/PocJ5jXv8No?si=1ltczRvCCBnQfvKT (dynamic arrays in c++) <br>
https://youtu.be/18r4P6UNSYk?si=b2npRYqDpCkELIpj (initialize vectors with user input) <br>
https://stackoverflow.com/questions/61988818/c-get-reference-of-object-inside-vector (reference objects in vector) <br>

I also utilized both gemini and chatGPT to answer conceptual questions such as: <br>
**emplace_back** <br>
**this->** 


