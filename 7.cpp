#include<iostream>
using namespace std;
int main()
{
	float cel ,frh;
	cout << "Enter temperature :";
	cin >> cel;
	frh=cel * 9/5+32;
	cout << "Temperature is " << frh << endl;
	return 0;
}

