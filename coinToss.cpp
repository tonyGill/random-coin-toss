/*


Algorithm was designed in the following series of steps:
1) Declare and define the coinToss function for random number generation: where heads is 1 and tails is 2
2) Declare and define the main function asking the user number of times coin should be tossed then call the coinToss function within main function
3) Output should display total quantity of heads and tails for the amount of coin tosses specified by the user


Functions/Formulas

Functions in the case of this lab was the coinToss() function for generating a random number in the 1 to 2 range for heads and tails
respectively; it is a int function type which returns an integer result as the random number and corresponding heads or tails 

The main function prompts the user for the amount of times they wish to toss the coin and then calls the coinToss() function to 
return the results, which are incremented each time a heads and tails is rolled, thus there is a counter for heads and tails

Formula used for random number generation between 1 and 2:

int randomNum = (rand() % 2) + 1


Revision History:
February 12, 2019: First and final version created, revised and completed


*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// This represents the coinToss function for generating random numbers in the range of 1 to 2, where 1 is heads and 2 is tails
int coinToss()
{

	// Generates a random number in the range of 1 to 2
	int randomNum = (rand() % 2) + 1;
	srand(randomNum);
	// Conditional specifies that if number is in 1 range display heads as output
	if (randomNum == 1)
		cout << "Heads" << endl;

	// Conditional specifies that if number is in 2 range display tails as output
	else if (randomNum == 2)
		cout << "Tails" << endl;

	// Returns the random number results as integer data type and type of function declared
	return randomNum;
}

/* This represents the main function that asks the user for the count toss count and calls the coinToss() function to display the results */
int main() {


	// Declare and intialize head counter to 0 
	int headCount = 0;

	// Declare and intialize tail counter to 1
	int tailCount = 0;

	// Declare the counter for coin toss quantity and results
	int coinTossCount, coinResults;

	// Prompts the user to specify the amount of times they wish to toss the coin
	cout << "Enter Number of Times You wish to toss the coin" << endl;

	// Takes user input for coin toss amount
	cin >> coinTossCount;

	// Loop for incrementing the coin toss and values for heads and tails
	for (int i = 1; i <= coinTossCount; i++) {

		// Calls the coinToss function to get the results 
		coinResults = coinToss();

		// Each time a 1 is rolled the amount of heads rolled is incremented
		if (coinResults == 1)
			headCount++;

		// Each time a 2 is rolled the amount of tails rolled is incremented
		else if (coinResults == 2)
			tailCount++;

	}

	// Outputs the results for the number of heads rolled with the amount of coin tosses specified 
	cout << "\nThe Total Number of Heads you Rolled: " << headCount << endl;

	// Outputs the results for tails rolled amount within the coin toss quantity specified
	cout << "\nThe Total Number of Tails you Rolled: " << tailCount << endl;


	return 0;
}


