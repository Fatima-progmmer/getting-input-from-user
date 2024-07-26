#include<iostream>
using namespace std;
int main()
{
	double gallons,cubicFeet;
	cout << "Enter the number of gallons :" ;
	cin >> gallons;
	cubicFeet=gallons*7.481 ;
	cout << gallons << " gallons is equal to " << cubicFeet << " cubicFeet" << endl;
	return 0;
}

