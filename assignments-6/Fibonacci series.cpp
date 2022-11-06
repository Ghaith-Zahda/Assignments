#include <iostream>
using namespace std;
void Fibonacci(int num)
{
	int num1 = 0, num2 = 1, t = 0;
	for (int i = 0; i < num; i++)
	{
		if (i < 2)
			cout << i << "\t";
		else
		{
			t = num2;
			num2 += num1;
			num1 = t;
			cout << num2 << "\t";
		}
	}
}
int main()
{
	int num = 0;
	char x;
	l1:cout << "Enter the number of Fibonacci series numbers to be printed\n";
	cin >> num;
	Fibonacci(num);
	cout << "\ntry agan?  yes (y)     no (n)\n";
	l2:cin >> x;
	switch (x)
	{
	case 'y':
		system("cls");
		goto l1;
	case 'n':
		goto exit;
	default:
		cout << "\a";
		goto l2;
	}
exit:;
}
