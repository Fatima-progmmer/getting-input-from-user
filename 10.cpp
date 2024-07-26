#include<iostream>
using namespace std;
int main()
{
	int ponds,shelling,pence;
	double decimal;
	cout << "Enter pounds :";
	cin >> ponds ;
	cout << "Enter Shilling :" ;
	cin >> shelling;
	cout << "Enter pence :";
	cin >> pence;
	decimal=ponds +(shelling*0.05) + (pence*0.008333);
	cout << " Value in decimal is " << decimal ;
	return 0;
}

