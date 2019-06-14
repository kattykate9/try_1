#include <iostream>
#include <conio.h>
#include<string.h>
#include<string>

using namespace std;

#include "d_myString.h"

myString::myString() {}

myString::myString(string x)
{
	s1 = x;
}

myString::~myString() {}

myString::myString(const myString & copy) : s1(copy.s1) {}

myString::myString(const myString && copy) : s1(copy.s1) {}

myString myString::operator+(const myString &b)
{
	myString result;
	result.s1 = s1 + b.s1;
	return result;
}

myString myString::operator*(const myString &b)
{
	myString result;
	const char* first = s1.c_str(), *second = b.s1.c_str(), *p;
	int i = 0;
	char ch[100] = " ";
	for (p = first; *p; ++p)
		if (strchr(second, *p))
		{
			ch[i++] = *p;
		}
	result.s1 = (const char*)ch;
	return result;
}

myString & myString:: operator= (const myString & right)
{
	this->s1 = right.s1;
	cout << "Result is: " << endl;
	return *this;
}

myString & myString:: operator= (const myString && right)
{
	this->s1 = right.s1;
	cout << "Result is: " << endl;
	return *this;
}

void myString::Display()
{
	cout << s1 << endl;
}