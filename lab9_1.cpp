#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double initialLoan, initerestRate, paymentPerYear;

	cout << "Enter initial loan: ";
	cin >> initialLoan;
	cout << "Enter interest rate per year (%): ";
	cin >> initerestRate;
	cout << "Enter amount you can pay per year: ";
	cin >> paymentPerYear;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	
	int year = 1;
	double PrevBalance = initialLoan;

	while(PrevBalance > 0){
		double interest = PrevBalance * (initerestRate / 100.0);
		double Total = PrevBalance + interest;
		double Payment = (Total < paymentPerYear) ? Total : paymentPerYear;
		double NewBalance = Total - Payment;

		cout << setw(13) << left << year; 
		cout << setw(13) << left << PrevBalance;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << Total;
		cout << setw(13) << left << Payment;
		cout << setw(13) << left << NewBalance;
		cout << "\n";	

		PrevBalance = NewBalance;
		year++;
	}
	
	return 0;
}
