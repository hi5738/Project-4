/*
File: RemLibraryDriver.cpp
Purpose: Test main to test Reminders library
Programmed By: Derek Chan
*/
#include <iostream>
#include <fstream>
#include "Reminder.h"

using namespace std;

int main() {
	int thisMonth, thisDay, thisYear;

	cout << "Welcome to Dr. Bender's Office" << endl;

	cout << "Welcome to REMINDER!" << endl;
	cout << "What is today's day?" << endl;
	cout << "Today's Month: ";
	cin >> thisMonth;
	cout << "\nToday's Day: ";
	cin >> thisDay;
	cout << "\nToday's Year: ";
	cin >> thisYear;

	//ifstream fin;

	//fin.open("savedEvents.txt");

	string filepath = "savedEvents.txt";

	/*if (!fin.is_open()) {
		cout << "NO FILE FOUND!" << endl;
	}*/

	cout << "Here are today's appointments";

	Reminder doctorRem = Reminder(filepath, thisMonth, thisDay, thisYear);

	doctorRem.RemEdit();
}