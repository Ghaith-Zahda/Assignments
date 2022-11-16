#include <iostream>
using namespace std;
int main()
{
	int arr[10];
	int* ptr = arr;
	for (int i = 0; i < 10; i++) {
		cout << "enter the number " << i + 1 << endl;
		cin >> arr[i];
	}
	cout << "reverse matrix\n";
	ptr = ptr + 9;
	for (int i = 9; i >= 0; i--) {
		cout << (*ptr--)<<"\t";
	}
}