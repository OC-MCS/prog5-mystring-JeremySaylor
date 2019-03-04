//===========================================================
//	Jeremy Saylor
//	Due the 1st Mar 2019
//	1st Mar 2019
//	Description: Assignment 5 (MyString.cpp)
//===========================================================
#include "MyString.h"  
#include <iostream>    
#include <cstdlib>  
#include <cstring>

using namespace std;
//***********************************************************
// Default constructor                                      *
//***********************************************************
MyString::MyString()
{
	str = nullptr;
}
//***********************************************************
// Constructor                                              *
//***********************************************************
MyString::MyString(const char *s)
{
	str = new char[strlen(s) + 1];
	strcpy_s(str, (strlen(s) + 1), s);
}
//***********************************************************
// Copy Constructor                                         *
//***********************************************************
MyString::MyString(const MyString &other)
{
	str = new char(strlen(other.str) + 1);
	strcpy_s(str, strlen((other.str) + 1), (other.str));
}
//***********************************************************
// Overloaded operator Constructor                          *
//***********************************************************
MyString MyString::operator = (const MyString &other)
{
	if (this != &other)
	{
		delete[] str;
		str = new char[strlen(other.str) + 1];
		strcpy_s(str, (strlen(other.str) + 1), other.str);
	}
	return *this;
}
//***********************************************************
// Overloaded operator +                                    *
//***********************************************************
MyString MyString::operator+(const MyString &other)
{
	MyString temp;
	temp.str = new char(strlen(other.str) + strlen(this->str) + 1);
	strcpy_s(temp.str, strlen(other.str), (other.str));
	strcat_s(temp.str, 1, " ");
	strcat_s(temp.str, strlen(this->str), this->str);
	return temp;
}
//***********************************************************
// Operator << function                                     *
//***********************************************************
ostream &operator << (ostream &strm, const MyString &obj)
{
	return strm << obj.getc_str();
}
//***********************************************************
// Overloaded operator ==                                   *
//***********************************************************
bool MyString::operator ==(const MyString &other)
{
	int compare = 0;
	int i = 0;
	bool status;
	if (strlen(other.str) == strlen(str))
	{
		while ( i < strlen(other.str) )
		{
			
			if (str[i] == other.str[i])
			{
				compare++;
			}
			i++;
		}
		if(compare == i)
		{ 
			status = true;
		}
	}
	else
	{
		status = false;
	}
	return status;
}
//***********************************************************
// get pointer for << operator to work                      *
//***********************************************************
char *MyString::getc_str() const
{
	return str;
}