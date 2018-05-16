/* INFO450ATM.cpp
 * INFO 450
 * 2/9/2018
 * Program Description:
 * Validates and divides a user-requested sum of money into the fewest number of bill denominations.
 */

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int request;
	int dollars;
	char answer;
	do // Program-run loop
	{
		do // User-request loop
		{
			cout << "Please enter your withdrawal request." << endl << "\t>$";
			cin >> request;
			if (request < 1)
			{
				cout << "Sorry, no withdrawals under $1" << endl << endl;
			}
			else if (request > 300)
			{
				cout << "Sorry, no withdrawals over $300" << endl << endl;
			}
		} while ((request < 1) || (request > 300)); //Repeats until valid amount

		cout << endl << "Your withdrawal of $" << request << " will appear as:" << endl;
		dollars = request; //Dollar amount will diminish as it's portioned into denominations
		if ((dollars / 50) > 0)
		{
			cout << "   ~ " << dollars / 50 << "x $50 bills" << endl;
			dollars %= 50;
		}
		if ((dollars / 20) > 0)
		{
			cout << "   ~ " << dollars / 20 << "x $20 bills" << endl;
			dollars %= 20;
		}
		if ((dollars / 10) > 0)
		{
			cout << "   ~ " << dollars / 10 << "x $10 bills" << endl;
			dollars %= 10;
		}
		if ((dollars / 5) > 0)
		{
			cout << "   ~ " << dollars / 5 << "x $5 bills" << endl;
			dollars %= 5;
		}
		if (dollars > 0)
		{
			cout << "   ~ " << dollars << "x $1 bills" << endl;
		}

		cout << endl << "Do you want to make another withdrawal? Enter Y to continue." << endl << "\t>";
		cin >> answer;
		cout << endl << endl;
	} while (answer == 'Y' || answer == 'y'); //Repeats whole program until user gets bored.

	return 0;
}
