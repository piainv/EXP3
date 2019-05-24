#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	char a[100], final;
	int b, w, x, y;
	
	cout << "Enter array size:" << " ";
	cin >> b;
	
	cout << "Enter characters:" << endl;
		for (x = 0; x < b; x++)
		{
			cin >> a[x];
		}
	
		x = 0;
		y = x - 1;
		while (x < y)
			{
				w = a[x];
				a[x] = a[y];
				a[y] = w;
				x++;
				y--;
			}
	cout << "\n Reversed result:" << endl;
		for (x = 0; x < b; x++)
		{
		cout << a[x] << " "; 
		}
	_getch();
	return 0;
}
