#include <iostream>
#include <conio.h>
using namespace std;

int addition (int a, int b)
{
  int choiceResult;
  choiceResult = a + b;
  return choiceResult;
}

int subtraction (int a, int b)
{
  int choiceResult;
  choiceResult = a - b;
  return choiceResult;
}

int multiplication (int a, int b)
{
  int choiceResult;
  choiceResult = a * b;
  return choiceResult;
}

float division (int a, int b)
{
  float choiceResult;
  choiceResult = a / b;
  return choiceResult;
}

float module (int a, int b)
{
	float choiceResult;
	choiceResult = a  % b;
	return choiceResult;
}


int main ()
{
  int choice, choiceResult, a , b;
  char confirm;
    
    cout << "\n\n* CALCULATOR *\n\n" << endl;
    
	cout << "Choose what operation to be done: " << endl;
	cout << "1. Add " << endl;
	cout << "2. Subtract " << endl;
	cout << "3. Multiply " << endl;
	cout << "4. Divide " << endl;
	cout << "5. Modulus " << endl;
	
	do
	{
	cout << "\n\nEnter your choice: "; cin >> choice;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	
	switch (choice)
	{
		case 1:
			cout << "Result: " << addition (a,b) << endl;
			break;
			
		case 2:	
			cout << "\nResult: " << subtraction (a,b) << endl;
			break;
			
		case 3:	
			cout << "Result: " << multiplication (a,b) << endl;
			break;
			
		case 4:	
			cout << "Result: " << division (a,b) << endl;
			break;
			
		case 5:
			cout << "Result: " << module (a,b) << endl;
			break;
			
		default:
			cout << "\nERROR\n\n";
	}
	
	cout << "\n(Press Y to confirm) "; cin >> confirm;
	}
	
	while (confirm=='y'||confirm=='Y');
	system ("PAUSE");
	
	cout << "\n\n\n\n\n\t\t\t\t      > <\n\t\t\t\t      ___";
	cout << "\n\n\t\t       ---------------KEN--------------\n\n";
	
  _getch();
  return 0;
}


