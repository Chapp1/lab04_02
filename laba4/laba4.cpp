#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
//123
using namespace std;
string create(int len);
int main(int argc, char* argv[])
{
	srand(time(NULL));


	for (int i = 0; i < 100; i++)
		cout << create(rand() % 8 + 1) << endl;

	system("pause");
	return 0;
}
string create(int len)
{
	string s1 = "";

	for (int i = 0; i < len; i++) {
		int a = rand() % 15 + 0;

		switch (a) {
		case 10: s1 += "A"; break;
		case 11: s1 += "B"; break;
		case 12: s1 += "C"; break;
		case 13: s1 += "D"; break;
		case 14: s1 += "E"; break;
		case 15: s1 += "F"; break;
		default: s1 += a + 48;
		}
	}
	return s1;
}