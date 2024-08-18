#include <iostream>

using namespace std;

int main() {
	
	int x = 100;
	int *ptrX, *ptrY;
	
	ptrX = &x;
	ptrY = &x;
	
	*ptrX = x;
	*ptrY = x;
	
	cout << "Isi variable x = " << x << " ada di alamat " << &x << endl;
	cout << endl;
	
	cout << "variable ptrX = " << ptrX << " sama dengan alamat x" << "(" << ptrX << ")" << endl;
	cout << "variable ptrY = " << ptrY << " sama dengan alamat x" << "(" << ptrY << ")" << endl;
	cout << endl;
	
	cout << "Nilai yg ditunjuk ptrX = " << *ptrX << " sama dengan nilai x " << "<" << *ptrX << ">" << endl;
	cout << "Nilai yg ditunjuk ptrY = " << *ptrY << " sama dengna nilai y " << "<" << *ptrY << ">" << endl;
	
	cout << endl << endl;
	system("pause");
	return 0;
} 
