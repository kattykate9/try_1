#include<iostream>
#include <iomanip>

using namespace std;

#include"interface_.h"

Array::Array(double arr[N]) :arr{}
{}
Array::Array(double arr[], int size)
{
	size = 0;
	arr[N] = { 0.0 };
}
Array::Array(double arr[], int size, int d)
{
	size = 0;
	arr[N] = { 0.0 };
	d = 0;
}

int Array::getSize()
{
	cout << "Insert the size of array:" << endl;
	cin >> size;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Invalid input. Try again, please..." << endl;
		cin >> size;
	}

	return this->size;
}
int Array::getarr()
{
	cout << "Insert the array:" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(256, '\n');
			cout << "Invalid input. Try again, please..." << endl;
			cin >> arr[i];
		}
	}
	return arr[size];
}
int Array::setarr()
{
	cout << setprecision(2) << fixed;
	for (int i = 0; i < size; i++)
	{
		cout << this->arr[i];
		cout << endl;
	}
	return arr[size];
}
int Array::getelem()
{
Tryagain:
	cout << "Chose the number of element in your array to move:" << endl;
	cin >> d;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Invalid input. Try again, please..." << endl;
		cin >> d;
	}
	if (d > arr[size - 1] || d < arr[0])
	{
		cout << "There is no such number of the element, chose another one..." << endl;
		goto Tryagain;
	}
	return this->d;
}
int Array::setelem()
{
	cout << "Your element is:" << endl;
	cout << this->arr[d - 1];
	return arr[d - 1];
}
int Array::change()
{
	for (int i = d; i < size; i += 1)
	{
		double t = arr[i - d];
		arr[i - d] = arr[i];
		arr[i] = t;
	}
	return this->arr[size];
}


