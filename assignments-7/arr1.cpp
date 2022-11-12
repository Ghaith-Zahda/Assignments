#include <iostream>
using namespace std;
//ÊÕÇÚÏí
void arr1(int arr[], int mysize) {
	int temp;
	for (int i = 0; i < mysize - 1; i++) {
		for (int j = i + 1; j < mysize; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < mysize; i++) {
		cout << arr[i] << "\t";
	}
}
//ÊäÇÒáí
void arr2(int arr[], int mysize) {
	int temp;
	for (int i = 0; i < mysize - 1; i++) {
		for (int j = i + 1; j < mysize; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < mysize; i++) {
		cout << arr[i] << "\t";
	}
}
int main()
{
	int num;
	char x;
	l2: cout << "Enter the number of the array numbers\n";
	cin >> num;
	int* myarr = new int[num];
	for (int i = 0; i < num; i++) {
		cout << "Enter the number "<<i+1<<endl;
		cin >> myarr[i];
	}
	cout << "Enter sort order 'ascending'  (a)     'descending'    (b)\n";
	l1: cin >> x;
	switch (x) {
	case 'a':
		arr1(myarr, num);
		break;
	case 'b':
		arr2(myarr, num);
		break;
		default:
			cout << "\a";
			goto l1;
	}
	cout << "\nPress any key to reset or press 'e' to exit\n";
	cin >> x;
	if (x != 'e') goto l2;
}