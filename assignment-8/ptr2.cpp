#include <iostream>
using namespace std;
int main()
{
	int number1, number2, temp;
	int& num1 = number1;
	int& num2 = number2;
	cout << "Enter first number\n";
	cin >> num1;
	cout << "Enter second number\n";
	cin >> num2;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "number1= " << num1 << endl;
	cout << "number2= " << num2 << endl;
}