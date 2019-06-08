#include<iostream>
#include<string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

#include "classDate.h";

int main()
{
	int d = 0, m = 0, y = 0;
	int d_1 = 0, m_1 = 0, y_1 = 0;
	Date d1, d2(12, 27, 1992), d3(0, 99, 8045);
	cout << "d1 is " << d1 << "\nd2 is " << d2 << "\nd3 is " << d3 << "\n\n";
	cout << "d2 += 22 is " << (d2 += 22) << "\n\n";

	d3.setDate(2, 28, 1995);
	cout << "d3 is " << d3;
	cout << "\n ++d3 is " << ++d3 << "\n\n";
	Date d4(3, 18, 2009);
	cout << "Testing the preincrement operator:\n" << " d4 is " << d4 << "\n";
	cout << "++d4 is " << ++d4 << "\n";
	cout << " d4 is " << d4 << "\n\n";

	cout << "Testing the postincrement operator:\n" << " d4 is " << d4 << "\n";
	cout << "d4++ is " << d4++ << "\n";
	cout << " d4 is " << d4 << "\n\n";

	Date d5(5, 12, 2003);
	cout << "Testing the difference:\n";
	cout << "Testing the postincrement operator:\n" << " d5 is " << d5 << "\n";
	cout << "d5-- is " << d5-- << "\n";
	cout << " d5 is " << d5 << "\n\n";

	cout << "Testing the preincrement operator:\n" << " d5 is " << d5 << "\n";
	cout << "--d5 is " << --d5 << "\n";
	cout << " d5 is " << d5 << "\n\n";

	cout << "d5 -= 117 is " << (d5 -= 117) << "\n\n";

	Date d6(11, 13, 2000), d7(7, 10, 1999);
	cout << d6 << " " << d7 << "\n";

	Date d8;
	cout << "Insert the date \n";
	cin >> d >> m >> y;
	cout << "The current date is:\n";
	d8.setDate(m, d, y);
	cout << d8 << "\n";
	cout << "How many days, months and years would you like to add?\n";
	cin >> d_1 >> m_1 >> y_1;
	d8.setDate((m + m_1), (d + d_1), (y + y_1));
	cout << d8 << "\n";

	Date d9;
	cout << "Insert the date \n";
	cin >> d >> m >> y;
	cout << "The current date is:\n";
	d9.setDate(m, d, y);
	cout << d9 << "\n";
	cout << "How many days, months and years would you like to subtract?\n";
	cin >> d_1 >> m_1 >> y_1;
	d9.setDate((m - m_1), (d - d_1), (y - y_1));
	cout << d9 << "\n";
	system("pause");
	return 0;
}