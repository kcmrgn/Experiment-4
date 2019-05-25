#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int temp;
	int sArray;
	int num[sArray];
	
	cout << "\n\n* NUMBER OF ELEMENTS *\n\n" << endl;
	
	cout << "(Selection Sorting....)" << endl;
	cout << "\nEnter the array size: "; cin >> sArray;
	cout << "Enter the " << sArray <<" elements: ";
	
	for (int k = 0; k < sArray; k++)
	{
		cin >> num[k];
	}
	
	
	for(int k = 0; k < sArray-1; k++)
	{
		for (int c= k+1; c < sArray; c++)
		{
			if (num[k] > num[c])
			{
				temp = num[k];
				num[k] = num[c];
				num[c] = temp;
			}
		}
	}
	
	cout << "\n\n\n(After using selection or bubble sort)";
	cout << "\n\nSorted Data: ";
	
	for (int k = 0; k < sArray; k++)
	{
		cout << num[k] << " ";
	}
	
	cout << "\n\n\n\n\n\t\t\t\t      > <\n\t\t\t\t      ___";
	cout << "\n\n\t\t       ---------------KEN--------------\n\n";
}
