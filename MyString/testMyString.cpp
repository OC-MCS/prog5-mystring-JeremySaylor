//===========================================================
//	Jeremy Saylor
//	Due the 1st Mar 2019
//	1st Mar 2019
//	Description: Assignment 5 (testMyString.cpp)
//===========================================================
#include <iostream>
#include "MyString.h" 
#include <cstring>

using namespace std;

int main()
{
	MyString S1("Bob");
	cout << S1 << endl;
	MyString S2("Sally");
	cout << S2 << endl;
	MyString S3;
	MyString S4("Bob");
	S3 = S1 + S2;
	cout << S3 << endl;
	S1 = S2;
	cout << S1 << endl;
	MyString name = ("sam");
	cout << name << endl;
	if (S1 == S4)
	{
		cout << "They are equal!\n";
	}
	cout << S4 << endl;
	return 0;
}