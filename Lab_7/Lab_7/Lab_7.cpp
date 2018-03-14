// Lab_7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>

void swaps(T *a, T *b) {
	T c;
	c = *a;
	*a = *b;
	*b = c;

}


int main()
{
	int a, b;
	cin >> a >> b;
	swaps(&a, &b);
	cout << a << "   " << b;
	cin >> a;


    return 0;
}

