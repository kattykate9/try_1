#pragma once

using namespace std;

class myString
{
private:
	string s1;
public:
	myString();                                       //default constructor
	myString(string x);                               //constructor with parameters
	~myString();                                      //destructor
	myString(const myString & copy);                  //copy constructor
	myString(const myString && copy);                 //move constructor
	myString operator+(const myString &b);            //operator + overload
	myString operator*(const myString &b);            //operator * overload
	myString& operator= (const myString & right);     //assignment operator
	myString& operator= (const myString && right);    //move operator
	void Display(void);
};