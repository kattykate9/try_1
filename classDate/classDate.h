#pragma once

#include<iostream>
#include<string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Date {

	friend ostream &operator<<(ostream &, const Date &);

private:
	int month;
	int day;
	int year;

	static const int days[];
	void helpIncrement();
	void helpDecrement();

public:
	Date(int m = 1, int d = 1, int y = 1900) { setDate(m, d, y); };
	void setDate(int, int, int);
	Date &operator++();
	Date operator++(int);
	const Date &operator+=(int);

	Date &operator--();
	Date operator--(int);
	const Date &operator-=(int);

	const Date &operator+=(Date &b);
	const Date &operator-=(Date &b);

	bool leapYear(int) const;
	bool endOfMonth(int) const;

};
