#include<iostream>
#include <iomanip>

using namespace std;
#include"interface_.h"

int main(int argc, char*argv[])
{
	double mas[N] = { 0.0 };
	cout << "Random size with the nulls:\n" << endl;
	Array obj1(mas);
	obj1.getSize();
	cout << "Your array is:" << endl;
	obj1.setarr();
	cout << "User's array:\n" << endl;
	Array obj2(mas);
	obj2.getSize();
	obj2.getarr();
	cout << "Your array is:" << endl;
	obj2.setarr();
	cout << "Using elements of the user's array:\n" << endl;
	obj2.getelem();
	obj2.setelem();
	cout << endl;
	obj2.change();
	cout << "Your new array is:\n" << endl;
	obj2.setarr();

	cout << endl;
	system("pause");
	return 0;
}