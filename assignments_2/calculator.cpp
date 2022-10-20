#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double number1 = 0, number2 = 0;
	char operation;
	calculator:system("cls");
	cout << "\t\t\t\tcalculator\n";
	cout << "Choose the type of operation:\n";
	cout << "\t\tMath (m)\t\t\tLogical (l)\t\t\tExit (e)\n";
	cin >> operation;
	switch (operation)
	{
	case 'm':
		//Math
		math:system("cls");
		cout << "\t\t\t\tMath\n";
		cout << "Choose the operation:\n";
		cout << "\tSum (+)\t\tSubtract (-)\tMultiply (*)\tDivide (/)\n\tpower (^)\tSqrt (S)\t\tGo back (b)\n";
		cin >> operation;
		switch (operation)
		{
		case '+':
			sum:system("cls");
			cout << "\t\t\t\tsum\n";
			cout << "Enter the first number:\n";
			cin >> number1;
			cout << "Enter the second number:\n";
			cin >> number2;
			cout << "result = " << number1 + number2 << endl;
			cout << "\tTry agan(t)\t\tGo back(b)\n";
			cin >> operation;
			if (operation == 't') goto sum;
			else goto math;
		case '-':
			Subtract:system("cls");
			cout << "\t\t\t\tSubtract\n";
			cout << "Enter the first number:\n";
			cin >> number1;
			cout << "Enter the second number:\n";
			cin >> number2;
			cout << "result = " << number1 - number2 << endl;
			cout << "\tTry agan(t)\t\tGo back(b)\n";
			cin >> operation;
			if (operation == 't') goto Subtract;
			else goto math;
		case '*':
			Multiply:system("cls");
			cout << "\t\t\t\tMultiply\n";
			cout << "Enter the first number:\n";
			cin >> number1;
			cout << "Enter the second number:\n";
			cin >> number2;
			cout << "result = " << number1 * number2 << endl;
			cout << "\tTry agan(t)\t\tGo back(b)\n";
			cin >> operation;
			if (operation == 't') goto Multiply;
			else goto math;
		case '/':
			Divide:system("cls");
			cout << "\t\t\t\tDivide\n";
			cout << "Enter the first number:\n";
			cin >> number1;
			num2:cout << "Enter the second number:\n";
			cin >> number2;
			if (number2 == 0)
			{
				cout << "\aYou can't divide by zero\n";
				goto num2;
			}
			cout << "result = " << number1 / number2 << endl;
			cout << "\tTry agan(t)\t\tGo back(b)\n";
			cin >> operation;
			if (operation == 't') goto Divide;
			else goto math;
		case '^':
			power:system("cls");
			cout << "\t\t\t\tpower\n";
			cout << "Enter the number:\n";
			cin >> number1;
			cout << "Enter the power:\n";
			cin >> number2;
			cout << "result = " << pow (number1 , number2) << endl;
			cout << "\tTry agan(t)\t\tGo back(b)\n";
			cin >> operation;
			if (operation == 't') goto power;
			else goto math;
		case 's':
			Sqrt:system("cls");
			cout << "\t\t\t\tSqrt\n";
			cout << "Enter the number:\n";
			cin >> number1;
			cout << "result = " << sqrt(number1) << endl;
			cout << "\tTry agan(t)\t\tGo back(b)\n";
			cin >> operation;
			if (operation == 't') goto Sqrt;
			else goto math;
		case 'b':
			goto calculator;
		default:
			cout << "\a";
			goto math;
		}
	case 'l':
		//Logical
		Logical:system("cls");
		cout << "\t\t\t\tLogical\n";
		cout << "Choose the operation:\n";
		cout << "\tAND (&)\t\tOR (|)\t\tNOT (!)\t\tXOR (^)\t\tGo back (b)\n";
		cin >> operation;
		switch (operation)
		{
		case '&':
			AND:system("cls");
			cout << "\t\t\t\tAND\n";
			cout << "Enter the first number:\n";
			cin >> number1;
			cout << "Enter the second number:\n";
			cin >> number2;
			cout << "result = " << (int(number1) & int(number2)) << endl;
			cout << "\tTry agan(t)\t\tGo back(b)\n";
			cin >> operation;
			if (operation == 't') goto AND;
			else goto Logical;
		case '|':
			OR:system("cls");
			cout << "\t\t\t\tOR\n";
			cout << "Enter the first number:\n";
			cin >> number1;
			cout << "Enter the second number:\n";
			cin >> number2;
			cout << "result = " << (int(number1) | int(number2)) << endl;
			cout << "\tTry agan(t)\t\tGo back(b)\n";
			cin >> operation;
			if (operation == 't') goto OR;
			else goto Logical;
		case '!':
			NOT:system("cls");
			cout << "\t\t\t\tNOT\n";
			cout << "Enter the number:\n";
			cin >> number1;
			cout << "result = " << ( !number1 ) << endl;
			cout << "\tTry agan(t)\t\tGo back(b)\n";
			cin >> operation;
			if (operation == 't') goto NOT;
			else goto Logical;
		case '^':
			XOR:system("cls");
			cout << "\t\t\t\tXOR\n";
			cout << "Enter the first number:\n";
			cin >> number1;
			cout << "Enter the second number:\n";
			cin >> number2;
			cout << "result = " << (int(number1) ^ int(number2)) << endl;
			cout << "\tTry agan(t)\t\tGo back(b)\n";
			cin >> operation;
			if (operation == 't') goto XOR;
			else goto Logical;
		case 'b':
			goto calculator;
		default:
			cout << "\a";
			goto Logical;
		}
	case 'e':
		//Exit
		system("cls");
		cout << "\n\n\n\t\t\tThank you for using my program\n\n\t\t\tCreated by Ghaith Zahda\n\n\n\n";
		system("pause");
		goto exit;
	default:
		cout << "\a";
		goto calculator;
	}
	exit:
	return 0;
}