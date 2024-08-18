#include <iostream>
#include <cstring>

using namespace std;

struct Mahasiswa {
	char npm[11];
	int nilai;
};

int main() {
	
	Mahasiswa mhs;
	
	strcpy(mhs.npm, "23.11.5744");
	mhs.nilai = 70;
	
	cout << "NPM = " << mhs.npm << ", nilai = " << mhs.nilai << endl << endl;
	
	Mahasiswa *ptrMhs;
	ptrMhs = &mhs;
	
	strcpy(ptrMhs->npm, "23.11.5744");
	ptrMhs->nilai = 100;
	
	cout << "NPM = " << mhs.npm << ", nilai = " << mhs.nilai << endl;
	cout << "NPM = " << ptrMhs->npm << ", nilai = " << ptrMhs->nilai << endl << endl;
	
	cout << endl << endl;
	system("pause");
	return 0;
} 
