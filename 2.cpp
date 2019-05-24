#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int x;
	int tempA[7], tempB[7], tempC[7];
	
	cout << "Welcome to your temperature tracker! \n" << "Please input temperature of province A in a week." << endl;
		for (x = 0; x < 7; ++x)
			{
			cout << "Day " << x + 1 << ":";
			cin >> tempA[x];
			}	
	cout << "Please input temperature of province B in a week." << endl;
		for (x = 0; x < 7; ++x)
			{
			cout << "Day " << x + 1 << ":";
			cin >> tempB[x];
			}
	cout << "Please input temperature of province A in a week." << endl;
		for (x = 0; x < 7; ++x)
			{
			cout << "Day " << x + 1 << ":";
			cin >> tempC[x];
			}		
	cout << "Data gathered for the temperature of three provinces in a week:" << endl;
		for (x = 0; x < 7; ++x)
			{
			cout << "Province A, " << "Day " << x + 1 << "= " << tempA[x] << endl;	
			}
		for (x = 0; x < 7; ++x)
			{
			cout << "Province B, " << "Day " << x + 1 << "= " << tempB[x] << endl;	
			}
		for (x = 0; x < 7; ++x)
			{
			cout << "Province C, " << "Day " << x + 1 << "= " << tempC[x] << endl;	
			}
	_getch();
	return 0;
}
