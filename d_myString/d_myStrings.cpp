#include <iostream>
#include <conio.h>
#include<string.h>

using namespace std;

#include "d_myString.h"

int main(int argc, char*argv[])
{
	cout << "First string is: vchtk" << endl;
	cout << "Second string is: hfxrta" << endl;
	myString str1("vchtk");
	myString str2("hfxrta");
	myString str3;
	cout << "Additioning..." << endl;
	str3 = str1 + str2;
	str3.Display();

	cout << endl;

	cout << "First string is: vchtk*&<pggf?" << endl;
	cout << "Second string is: hfxrta?gctf&<v" << endl;
	myString str4("vchtk*&<pggf?");
	myString str5("hfxrta?gctf&<v");
	myString str6;
	cout << "Multiplication..." << endl;
	str6 = str4 * str5;
	str6.Display();
	cout << endl;
	system("pause");
	return 0;
}