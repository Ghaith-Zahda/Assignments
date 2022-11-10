#include <iostream>
using namespace std;
void myarr(int arr[], int num) {
	for (int i = num-1; i >=0; i--) {
		cout << arr[i] << "\t";
	}
}
int main()
{
	int num;
	cout << "Enter the number of the array numbers\n";
	cin >> num;
	int* arr = new int[num];
	for (int i = 0; i < num; i++) {
		cout << "Enter the number " << i + 1 << endl;
		cin >> arr[i];
	}
	cout << "inverting matrix: \n";
	myarr(arr, num);
}