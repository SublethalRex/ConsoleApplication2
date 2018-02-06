// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	for (int x = 5; x < 100; x += 5) {
		cout << x << endl;
	}


	float a;
	float d = 10000;
	float r = .01;

	for (int day = 1; day < 26; day++) {
		a = pow(1 + r, day);
		cout << day << "-------" << a << endl;
	}

    return 0;
}

