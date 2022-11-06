#include <iostream>
#include <cstdarg>
using namespace std;
void foo(int num , ... )
{
	int t;
	int nums[10];
	va_list list1;
	va_start(list1, num);
	for (int i = 0; i < num; i++)
	{
		nums[i] = va_arg(list1, int);
	}
	va_end(list1);
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			if (nums[i] > nums[j])
			{
				t = nums[i];
				nums[i] = nums[j];
				nums[j] = t;
			}
		}
	}
	for (int i = 0; i < num; i++)
	{
		cout << nums[i] << "\t";
	}
}
int main()
{
	int arr[10] = { 0 };
	int num;
	char x;
 l2:cout << "This program is for arranging at most 10 numbers in ascending order\n\n";
	cout << "enter the number of numbers  (max 10)\n";
 l1:cin >> num;
	if (num > 10)
	{
		system("cls");
		cout << "\aPlease enter a number less than or equal to 10\n";
		goto l1;
	}
	system("cls");
	for (int i = 0; i < num; i++)
	{
		cout << "Enter the number " << i + 1 << endl;
		cin >> arr[i];
	}
	cout << endl;
	foo(num, arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
	cout << "\n\nPress any key to try again or press 'e' to exit \n";
	cin >> x;
	if (x != 'e')
	{
		system("cls");
		goto l2;
	}
}