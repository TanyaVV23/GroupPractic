// Lab_7.4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>
T amax(T n[], int length) {
	T max = n[0];
	for (int i = 1; i < length; i++) {
		if (n[i] > max) max = n[i];
		
	}
	return max;
}

int main()
{
	int a[] = {4, 5, 6, 2, 9, 44, 56};
	float b[] = {5.0, 3.0, 6.0, 85.0, 66.0, 44.0, 52.0};

	cout << amax(a, 7) << endl << amax(b, 7) ;
	cin >> a[6];


    return 0;
}

