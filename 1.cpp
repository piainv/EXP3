#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int num, largest, smallest, total;
	int numbers[10];
	double ave; 
	
	cout << "Please input 10 numbers." << "\n";
		for (num = 0; num < 10; num++)
		numbers[num] = 0; 
		
		for (num = 0; num < 10; num++)
		cin >> numbers[num];

	
	largest = numbers[0];
		for (num = 0; num < 10; num++)
		{
			if (largest < numbers[num])
				{
					largest = numbers[num];
				}
		}
		cout << "The largest number is" << " " << largest << "." << endl;
		
	smallest = numbers[0];
		for (num = 0; num < 10; num++)
		{
			if (smallest > numbers[num])
				{
					smallest = numbers[num];
				}
		}
		cout << "The smallest number is" << " " << smallest << "." << endl;
		
	total = 0;
		for (num = 0; num < 10; num++)
		total += numbers[num];
		cout << "The total of all numbers is" << " " << total << "." << endl;
		
	ave = (total)/10;
		cout << "The average of all numbers is" << " " << ave << ".";
	
	_getch();
	return 0;
}
