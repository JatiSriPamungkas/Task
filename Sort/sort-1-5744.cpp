#include <iostream>

using namespace std;

void bubbleSort(int n, int arr[]) {
	int i, j;
	bool flag;
	for (i = 0; i < n; i++) {
		flag = false;
		for (j = 0; j < n-i-1; j++) {
			// Membandingkan nilai array
			if (arr[j] > arr[j+1]) {
				swap(arr[j],arr[j+1]);
				flag = true;
			}
		}
	}
}

int main() {
	
	int arr[] = {-2,45,0,11,-9};
	int n = sizeof(arr)/sizeof(int);
	cout << "Sebelum Array disorting: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	bubbleSort(n,arr);
	cout << "Setelah Array disorting: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}
