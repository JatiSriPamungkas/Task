#include <iostream>

using namespace std;

// Inisialisasi Method
void ascendingBubbleSort(int totalData, string arr[]);
void descendingBubbleSort(int totalData, string arr[]);
void printArray(int totalData, string arr[]);

int main() {

  int totalData;
  cout << "Masukkan banyak Input data = ";
  cin >> totalData;

  string arr[totalData];

  cin.ignore();
  for (int i = 0; i < totalData; i++) {
    cout << "Input Nama = ";
    getline(cin, arr[i]);
  }
  cout << endl;

  cout << "Data yang telah diurutkan Ascending sesuai Abjad Nama : " << endl;
  ascendingBubbleSort(totalData, arr);
  printArray(totalData, arr);
  cout << "Data yang telah diurutkan Descending sesuai Abjad Nama : " << endl;
  descendingBubbleSort(totalData, arr);
  printArray(totalData, arr);

  return 0;
}

// Method
void ascendingBubbleSort(int totalData, string arr[]) {
  int i, j;
  bool flag;
  for (i = 0; i < totalData; i++) {
    flag = false;
    for (j = 0; j < totalData - i - 1; j++) {
      // Membandingkan nilai array
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        flag = true;
      }
    }
  }
}

void descendingBubbleSort(int totalData, string arr[]) {
  int i, j;
  bool flag;
  for (i = 0; i < totalData; i++) {
    flag = false;
    for (j = 0; j < totalData - i - 1; j++) {
      // Membandingkan nilai array
      if (arr[j] < arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        flag = true;
      }
    }
  }
}

void printArray(int totalData, string arr[]) {
  for (int i = 0; i < totalData; i++) {
    cout << "Nama: " << arr[i] << endl;
  }
  cout << endl;
}
