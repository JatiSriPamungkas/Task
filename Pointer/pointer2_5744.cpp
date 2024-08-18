#include <iostream>

using namespace std;

int main() {
	
int x = 100, y = 130, z; //deklarasi var non-pointer

int *ptrX, *ptrY; // deklarasi pointer

cout << "Nilai x = " << x << ", y = " << y << endl;
cout << endl;

cout << "Alamat x = " << &x << ", y = " << &y << endl;
cout << endl;

ptrX = &x; // ptrX menunjuk alamat x
cout << "Isi ptrX = " << ptrX << " (alamat x), nilai yg ditunjuk ptrX = " << *ptrX << endl;
cout << endl;

ptrY = &y;
cout << "Isi ptrY = " << ptrY << " (alamat y), nilai yg ditunjuk ptrX = " << *ptrY << endl;
cout << endl;

z = *ptrX;
cout << "Nilai z = " << z << " sama dengan nilai x  <" << x << ">" << endl;
cout << endl;

*ptrY = 70;
cout << "Isi ptrY = " << ptrY << " <tetap>, nilai y = " << *ptrY << " (yang berubah)" << endl;
cout << endl;

*ptrX = *ptrY + 5;
cout << "Isi ptrX = " << ptrX << " <tetap>, nilai x = " << *ptrX << " (yang berubah)" << endl;
cout << endl;

ptrX = ptrY;
cout << "Isi ptrX = " << ptrX << " dan ptrY = " << ptrY << endl;
cout << endl;

cout << "Nilai yang ditunjuk ptrX = " << *ptrX << " dan ptrY = " << *ptrY;

	cout << endl << endl;
	system("pause");
	return 0;
} 
