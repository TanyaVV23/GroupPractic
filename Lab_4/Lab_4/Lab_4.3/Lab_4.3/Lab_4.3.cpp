// Lab_4.3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
struct Distanse {
	int feet;
	float inches;
};

float B(Distanse a, Distanse b) {
	return a.feet * 12 + a.inches > b.feet * 12 + b.inches ? a.feet * 12 + a.inches : b.feet * 12 + b.inches;
}


int main()
{
	Distanse d1, d2;

	cin >> d1.feet;
	cin >> d1.inches;
	cin >> d2.feet;
	cin >> d2.inches;

	cout << B(d1, d2) << endl;
	cin >> d1.feet;

    return 0;
}

