//Alejandro Bermudez

#pragma once
#include "pch.h"
#include "BloodSugarDay.h"

class BloodSugarWeek {
private:
	BloodSugarDay * week;
	BloodSugarWeek * prev;
	BloodSugarWeek * next;
	int currentDay;
	int weekNumber;

public:
	BloodSugarWeek(BloodSugarWeek* following, int weekN);
	BloodSugarWeek(BloodSugarWeek* previous);
	void addEntry(int in);
	int weekMax();
	int weekMin();
	int weekSum();
	int weekCount();
	int weekNum();
	int weekDelta();

	int getDay();
	void nextDay();
	BloodSugarWeek newWeek();
	void printDay();
	void printWeek();
};