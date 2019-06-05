#include <iostream>
#include <conio.h>
#include<string.h>
using namespace std;
#include"Sticker.h"

int main(int argc, char*argv[])
{
	sticker s1;
	sticker s2;
	sticker s3;
	s1.get();
	s2.get();

	s3 = s1 + s2;


	if (s1 == s2)
		cout << "Both strings are same" << endl;
	else
		cout << "Both strings are different" << endl;

	s3.set();

	sticker notes[N];

	for (int i = 0; i < N; i++)
	{
		notes[i].get();
	}

	for (int i = 0; i < N; i++)
	{
		notes[i].set();
	}
	system("pause");
	return 0;
}