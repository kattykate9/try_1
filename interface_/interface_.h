#pragma once
#define N 100
class Array {
	double arr[N];
	int size;
	int d;
public:
	Array(double arr[N]);

	Array(double arr[], int size);
	
	Array(double arr[], int size, int d);
	
	int getSize();
	int getarr();
	int setarr();
	int getelem();
	int setelem();
	int change();
	~Array()
	{}
};