#include <iostream>
#include <string>

using namespace std;

const int MAX_STACK = 3;

struct Stack {
	int top;
	string data[MAX_STACK];
};

void inisialisasi();
void push(string data);
void pop();
void clear();
bool isEmpty();
bool isFull();
void print();

Stack stack;


int main() {


	int pilihanMenu;
	string data;

	do {
		cout << ">>>> PILIHAN MENU STACK <<<<" << endl << endl;
		cout << "1. Menambah item stack" << endl;
		cout << "2. Menghapus item stack" << endl;
		cout << "3. Menampilkan item stack" << endl;
		cout << "4. Mengosongkan stack" << endl;
		cout << "5. Selesai" << endl;
		
		cout << "Masukkan pilihan Anda: "; cin >> pilihanMenu;
		cout << endl;

		switch (pilihanMenu) {
			case 1:
				if (isFull()) {
					cout << "Stack sudah penuh !!!" << endl;
				} else {
				cout << "Masukkan Nama Anggota Kelompok: "; 
				cin.ignore();
				getline(cin, data);
				push(data);
				}
				break;
			case 2:
				if (isEmpty()) {
					cout << "Stack masih kosong !!!" << endl << endl;
				} else {
					pop();
				}
				break;
			case 3:
				if (isEmpty()) {
					cout << "Stack masih kosong !!!" << endl << endl;
				} else {
					print();
				}
				break;
			case 4:
				clear();
				break;	
			case 5:
				break;
			default:
				cout << "Pilihan Menu tidak ada!" << endl;
				break;
		}
	} while (pilihanMenu != 5);

	cout << endl;
	system("pause");
	return 0;
}


// Definisi fungsi stack

void inisialisasi()
{
	stack.top = -1;
}

void push (string data) {
	stack.top++;
	stack.data[stack.top] = data;
	cout << "Data berhasil ditambahkan" << endl << endl;
}

void pop() {
	cout << "Data " << stack.data[stack.top] << " sudah dihapus" << endl << endl;
	stack.top--;
}

void clear() {
	stack.top = -1;
	cout << "Stack sudah dikosongkan" << endl << endl;
}

bool isEmpty() {
	return(stack.top == -1);
}

bool isFull(){
	return (stack.top >= (MAX_STACK - 1));
}

void print() {
	cout << "Isi stack :" << endl << endl;
	for (int i = stack.top; i >= 0; i--) {
		cout << stack.data[i] << endl;
	}
	cout << endl << endl;
}



