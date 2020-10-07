/*
 * main.cpp
 *
 *  Created on: Oct 4, 2020
 *      Author: geofflange
 */

#include <iostream>
#include "BalanceReports.h"
using namespace std;

int main() {
	char restart = 'y';

	while (restart == 'y'){
	BalanceReports Report = BalanceReports(); // create BalanceReport class instance
	try {
		Report.getInput(); // Prompt user for input
		if (Report.checkInput() == false) {
			// indicate errors for invalid parameters
			cout << "Invalid Entry, must be a positive number, please restart." << endl;
			return 0; // FIXME: restart the program

		}
		Report.displayInput(); // show input results

		Report.displayBalanceReports(false); // Balance and interest report without additional deposits
		Report.displayBalanceReports(true); // Balance and interest report with additional deposits
	} catch (const exception &e) {
		// catch all, prompt restart
		cout << "Error: Invalid Entry, please restart." << endl;
	}
	cout << "Restart y or n" << endl;
		cin >> restart;
	}


	return 0;


}
