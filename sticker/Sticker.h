#pragma once

const int N = 5;
using namespace std;

class sticker
{
private:
	char str[100];
	int len;


public:

	sticker();

	sticker(const char& str);

	sticker(const char* str);

	sticker(const char* str, size_t len);

	//sticker(const sticker &str);

	explicit sticker(char str);

	void get();

	void  set();

	sticker operator+(sticker s);

	int   operator == (sticker s);

	~sticker() {};
};