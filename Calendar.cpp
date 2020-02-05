/*
Instructions:

2018 is non leap year so devide it by 4 reminder will be 2, so add 11 to 2018 you will get same calendar as 2018 at 2029.

1) Like this for reminder 0 add 28 years
2) For reminder 1 add 6 years
For reminder 2 & 3 add 11 years
1) Remember : In case of leap year just add 28.

Matchig calendar with previous/ next year with exact same calendar layout
*/

#include<iostream>
using namespace std;

int main() {

	//leap counter
	int year, previous, next;
	std::cout << "Choose desired year: " << endl;
	std::cin >> year;

		// Leap year every 4 years -> year%4==0 -> case 1) - add/substract 28
		if (year % 4 == 0)
		{
			previous = year - 28;
			next = year + 28;
		}
		// Case for the next after a leap year -> add/substract 6
		if (year % 4 == 1)
		{
			previous = year - 6;
			next = year + 6;
		}
		// When it's leap year +2/+3 -> add/substract 11
		if (year % 4 == 2 || year % 4 == 3)
		{
			previous = year - 11;
			next = year + 11;
		}
	// We should have the current, next and previous same callendar layout year, let's test it out

	std::cout << previous << " had the same calendar layout as " << year << " and you can use the same calendar again in " << next << endl;


}