#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


struct Phone
{
	int CC;
	int CO;
	int CA;
	
};

int main()
{
	Phone MyPhone, YourPhone;
	MyPhone.CC = 380;
	MyPhone.CO = 98;
	MyPhone.CA = 4589675;

	cin>> YourPhone.CC >> YourPhone.CO >> YourPhone.CA;
	
	cout << YourPhone.CC << "(" << YourPhone.CO << ")" << (int)YourPhone.CA / 10000 << "-" << YourPhone.CA / 100 % 100 << "-" << YourPhone.CA % 100 << endl<<
		MyPhone.CC << "(" << MyPhone.CO << ")" << (int)MyPhone.CA / 10000 << "-" << MyPhone.CA / 100 % 100 << "-" << MyPhone.CA % 100 << endl;

	
	cin >> MyPhone.CC;


	return 0;
}