﻿// Stephanie Canepa
// Spring 2019
// Lab 1

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{

	//Declare all variables that you will need
	//Make sure you state all the constants
	const int nickle = 5,
		dime = 10,
		quarter = 25;

	int	total_cents,
		pennies,
		nickles,
		dimes,
		quarters,
		remaining_change,
		value,
		value2,
		value3;

	//cout the initial question you will need 
	//this is where the user will give you the total amount
	cout << "How much change do you have? ";
	cin >> total_cents;

	//Start the operations 
	//Keep track of what goes where 
	//WATCH THE CALCULATIONS
	quarters = total_cents / 25;
	cout << "You will have " << quarters << " quarters." << endl;
	value = quarter * quarters;
	remaining_change = total_cents - value;
	cout << endl;
	cout << "Your remaining change is " << remaining_change << " cents." << endl;
	cout << endl;

	//Set the total amount of cents equal to the remaining change
	total_cents = remaining_change;

	//Continue the operations
	dimes = remaining_change / 10;
	cout << "You will have " << dimes << " dimes." << endl;
	value2 = dimes * dime;
	remaining_change = total_cents - value2;
	cout << endl;
	cout << "Your remaining change is " << remaining_change << " cents." << endl;
	cout << endl;

	//repeat the process
	total_cents = remaining_change;

	nickles = remaining_change / 5;
	cout << "You will have " << nickles << " nickles." << endl;
	value3 = nickle * nickles;
	remaining_change = total_cents - value3;
	cout << endl;
	cout << "Your remaining change is " << remaining_change << " cents." << endl;
	cout << endl;

	pennies = remaining_change;

	cout << "You will have " << pennies << " pennies." << endl;






	
	return 0;
}
