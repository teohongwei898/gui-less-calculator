// BasicGUIlessCalculator.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <conio.h>
using namespace std;




int main()
{
	int operation, num1, num2, result;
	char option;
	do
	{
	cout << "What kind of operation do you want to do?" << endl;
	cout << "Press 1 for addition." << endl;
	cout << "Press 2 for subtraction." << endl;
	cout << "Press 3 for multiplication." << endl;
	cout << "Press 4 for divsion." << endl;
	cin >> operation;
	cout << "Please enter your first number." << endl;
	cin >> num1;
	cout << "Please enter the second umber." << endl;
	cin >> num2;
	switch (operation)
	{
	case 1: result = num1 + num2;
		cout << "Your result is : " << result << endl;
		break;

	case 2: result = num1 - num2;
		cout << "Your result is : " << result << endl;
		break;
	case 3: result = num1*num2;
		cout << "Your result is : " << result << endl;
		break;
	case 4: if (num2 == 0)
	{
		cout << "Error! Operation invalid!" << endl;
		break;
	}
			else
			{
				result = num1 / num2;
				cout << "Your result is : " << result << endl;
				break;
			}
	default: cout << "Please ensure operation is selected correctly." << endl;
	}
	cout << "Do you want to try again? Y/N" << endl;
	option = getche();
	cout << endl;
   }while (option == 'Y');

    return 0;
}

