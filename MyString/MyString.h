//===========================================================
//	Jeremy Saylor
//	Due the 1st Mar 2019
//	1st Mar 2019
//	Description: Assignment 5 (MyString.h)
//===========================================================
#include <iostream>

using namespace std;

class MyString
{
private:
	char *str;
public:
	MyString();
	MyString(const char *s);
	MyString(const MyString &other);
	MyString operator = (const MyString &other);
	MyString operator+(const MyString &other);
	bool operator ==(const MyString &other);
	char *getc_str() const;
	~MyString()
		{ delete str;}
};

ostream &operator << (ostream &strm, const MyString &obj);