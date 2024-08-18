#include <iostream>

using namespace std;

int main() {
	
	string temp, key;
	int kiri, kanan, tengah, n;
	
	bool isktm= false;
	
	// Jumlah input
	cout << "Masukkan jumlah data : ";
	cin >> n;
	
	string arr[n];
	
	cout << endl;
	
	// Input data
	cin.ignore();
	for (int i = 0; i < n; i++) {
		cout << "Nama di Index ke - [" << i << "]: ";
		getline(cin, arr[i]);
	}
	
	cout << endl;
	
	// Sorting
	for (int i = 0; i < n; i++) {
			for (int j = 0; j < n-i-1; j++) {
				if (arr[j] > arr[j+1]){
					temp = arr[j];
					arr[j] = arr [j+1];
					arr[j+1] = temp;
				} 
			}	
	}
	
	// Output Sorting
	cout << "Data yang telah diurutkan adalah : " << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
	cout << endl;
	
	// Searching
	cin.ignore();
	cout << "Masukkan Nama yang dicari : ";
	getline(cin, key);
	kiri = 0;
	kanan = n - 1;
	
	while (kiri <= kanan) {
		tengah = (kiri + kanan) / 2;
		
		if (key == arr[tengah]) {
			isktm = true;
			break;
		} else if (key < arr[tengah]) {
			kanan = tengah - 1;
		} else {
			kiri = tengah + 1;
		}
	}
	
	if (isktm) {
		cout << "Nama ditemukan Pada index ke-" << tengah << endl << endl;
	} else {
		cout << "Nama tidak ditemukan " << endl << endl;
	}
	
	system("pause");
	return 0;
}








