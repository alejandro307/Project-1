//Alejandro Bermudez
//Project 1

#include "pch.h"
#include "bloodSugarDay.h"
#include "bloodSugarWeek.h"
#include <iostream>
#include "string.h"
using std::cout;
using std::cin;
using std::endl;

BloodSugarWeek nextWeek();


int main()
{
	/* //tests for BloodSugarDay class functions
	BloodSugarDay day = BloodSugarDay(1);
	day.addEntry(45);
	day.addEntry(70);
	day.addEntry(25);
	day.addEntry(20);
	day.addEntry(100);
	day.addEntry(10);
	BloodSugarDay day2 = BloodSugarDay(2);
	day.printDay();
	day2.printDay();

	BloodSugarWeek week1 = BloodSugarWeek(NULL);
	*/
	int input;
	string in("");
	BloodSugarWeek week1 = BloodSugarWeek(NULL, 1);
	BloodSugarWeek currentWeek = week1;
	cout << "Enter a value(e/entry to create a new entry, n/next for next day, d/day for daily summary, w/week for weekly summary, or end)" << endl;
	cout << "\tWeek " << currentWeek.weekNum() << ", Day " << (currentWeek.getDay() + 1) << endl;
	while (in != "end")
	{
		cout << ": ";
		cin >> in;
		if (in == "e" || in == "entry")
		{
			cout << "Enter a blood sugar level: ";
			cin >> input;
			if (input > 0)
			{
				currentWeek.addEntry(input);
			}
		}
		else if (in == "n" || in == "next")
		{
			if (currentWeek.getDay() < 6)
			{
				currentWeek.nextDay();
			}
			else
			{
				currentWeek = currentWeek.newWeek();
			}
			cout << "\tWeek " << currentWeek.weekNum() << ", Day " << (currentWeek.getDay() + 1) << endl;


		}
		else if (in == "d" || in == "day")
		{
			currentWeek.printDay();
		}
		else if (in == "w" || in == "week")
		{
			currentWeek.printWeek();
		}
		else if (in != "end")
		{
			cout << "\nInvalid option, please enter e/entry to create a new entry, n/next for next day, d/day for daily summary or w/week for weekly summary";
		}

	}

	return 0;
}
