#include <iostream>
#include <conio.h>
#include<string.h>
using namespace std;
#include"Sticker.h"


	sticker::sticker() {}

	sticker::sticker(const char& str) :str("note") {}

	sticker::sticker(const char* str) : str("my notes") {}

	sticker::sticker(const char* str, size_t len) : str("too many notes"), len(20) {}

	//sticker(const sticker &str){}

	sticker::sticker(char str)
	{
		this->str;
	}
	



	void sticker:: get()
	{
		cout << "Enter your string : ";
		cin >> str;
		len = strlen(str);
	}

	void  sticker::set()
	{
		cout << "Your string is: " << str << endl;
	}

	sticker sticker::operator+(sticker s)
	{
		sticker t;

		strcpy_s(t.str, str);
		strcat_s(t.str, s.str);

		t.len = len + s.len;

		return(t);
	}

	int   sticker::operator == (sticker s)
	{
		if (strcmp(str, s.str) == 0)
			return 1;
		else
			return 0;
	}

