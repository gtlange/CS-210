/*
 * BalanceReports.h
 *
 *  Created on: Oct 4, 2020
 *      Author: geofflange
 */

#ifndef SRC_BALANCEREPORTS_H_
#define SRC_BALANCEREPORTS_H_

class BalanceReports {
public:
	BalanceReports(); // default constructor
	BalanceReports(double t_initialInvestment, double t_monthlyDeposit,
			double t_annualInterest, int t_numYears); // constructor for testing purposes only.
	virtual ~BalanceReports(); // destructor

	void displayBalanceReports(bool additionalDeposits); // display results (with or without additional deposits)
	void getInput(); // get input from user
	void displayInput(); // display user input
	bool checkInput(); // check input for validity.

private:
	double initialInvestment; // opening investment must be >= 0
	double monthlyDeposit; // additional deposits must be >= 0
	double annualInterest; // interest must be >= 0
	int numYears; // number of years must be > 0
};



#endif /* SRC_BALANCEREPORTS_H_ */
