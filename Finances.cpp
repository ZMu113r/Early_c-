#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <stdexcept>

using namespace std;

//Function to calculate money earned off interest
void futureMoney();
//When you don't pay your bill on time
void moneyOwed();

void futureMoney() {

	double principle = 0.0, APR = 0.0;
	int time;

	cout << "Enter your principle value: " << endl;
	cin >> principle;
	cout << "Enter number of years you've been collecting interest: " << endl;
	//time is in years
	cin >> time;
	cout << "Enter your APR: " << endl;
	cin >> APR;

	cout << "Principle = " << principle << endl;
	cout << "Time =  " << time << endl;


	double money = principle * (APR * time);


	cout << "You have earned " << money << " from interest." << endl;

	money += principle;

	cout << "The total amount you have in your account is: " << money << endl;

	cout << "------------------------------------------------------------------" << endl;
	double total = 0.0, total2 = 0.0, total3 = 0.0;
	total = principle * (pow((1 + APR), 1 ));
	total2 = principle * (pow((1 + APR), 2 ));
	total3 = principle * (pow((1 + APR), time ));

	cout << "Starting Amount" << " | " << "Interest Rate" << " | " << "Years Invested" << " | " << "Final Amount" << " | " << endl;

	cout << setprecision(5) << "$" << principle << setw(13) << " | " << 1 + APR << "%" << setw(12) << "| " << 1 << setw(16) << "| " << "$" << total << endl;
	cout << setprecision(5) << "$" << principle << setw(13) << " | " << 1 + APR << "%" << setw(12) << "| " << 2 << setw(16) << "| " << "$" << total2 << endl;
	cout << setprecision(5) << "$" << principle << setw(13) << " | " << 1 + APR << "%" << setw(12) << "| " << time << setw(16) << "| " << "$" << total3 << endl;

	cout << "\n\n";
}

void moneyOwed() {

	string billName;
	double interestRate;
	double initialBill;
	int time;
	double amountOwed;

	cout << "Which bill is in question?" << endl;
	cin >> billName;

	cout << "How much is the initial amount on the bill?" << endl;
	cin >> initialBill;

	//interest rate is per week overdue
	cout << "How much is interest?" << endl;
	cin >> interestRate;

	cout << "How many weeks overdue is the bill?" << endl;
	cin >> time;

	amountOwed = initialBill + ((initialBill * interestRate) * time);

	cout << "The amount owed is: " << amountOwed << endl;

}
int main() {

	string answer;
	int s = 0;

	cout << "Bills or Retirement?" << endl;
	cin >> answer;

	while (s != 1) {

		if(answer == "Bills" || answer == "bills") {
			moneyOwed();
			s = 1;
		}

		else if (answer == "Retirement" || answer == "retirement") {
			futureMoney();
			s = 1;
		}
		
		else {
			throw invalid_argument("Not a valid option");
		}

	}

	return 0;
}