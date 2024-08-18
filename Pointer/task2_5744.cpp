#include <iostream>
#include <cstring>
#include <cctype> // Library untuk fungsi manipulasi huruf

using namespace std;

// Fungsi untuk membuat huruf pertama menjadi huruf besar
void hurufPertamaBesar(char *str) {
    // Jika karakter pertama adalah huruf kecil, ubah menjadi huruf besar
    if (*str >= 'a' && *str <= 'z') {
        *str = toupper(*str);
    }
}

// Fungsi untuk membuat semua huruf menjadi huruf besar
void semuaHurufBesar(char *str) {
    // Loop melalui setiap karakter dalam string dan ubah menjadi huruf besar
    while (*str != '\0') {
        *str = toupper(*str);
        str++;
    }
}

// Fungsi untuk membuat semua huruf menjadi huruf kecil
void semuaHurufKecil(char *str) {
    // Loop melalui setiap karakter dalam string dan ubah menjadi huruf kecil
    while (*str != '\0') {
        *str = tolower(*str);
        str++;
    }
}

int main() {
    const int MAX_PANJANG_STRING = 1000;
    char stringInput[MAX_PANJANG_STRING];

    cout << "Masukkan Kalimat: ";
    cin.getline(stringInput, MAX_PANJANG_STRING);

    // Membuat salinan string untuk setiap operasi
    char stringCopy[MAX_PANJANG_STRING];
    strcpy(stringCopy, stringInput);

    // Memanggil fungsi untuk membuat semua huruf menjadi huruf besar
    strcpy(stringCopy, stringInput); // Mengembalikan stringCopy ke kondisi awal
    semuaHurufBesar(stringCopy);
    cout << "Kalimat dalam huruf menjadi huruf besar: " << stringCopy << endl;

    // Memanggil fungsi untuk membuat semua huruf menjadi huruf kecil
    strcpy(stringCopy, stringInput); // Mengembalikan stringCopy ke kondisi awal
    semuaHurufKecil(stringCopy);
    cout << "Kalimat dalam huruf menjadi huruf kecil: " << stringCopy << endl;

    // Memanggil fungsi untuk membuat huruf pertama menjadi huruf besar
    hurufPertamaBesar(stringCopy);
    cout << "Kalimat Awal menjadi huruf besar: " << stringCopy << endl;

    cout << endl << endl;
	system("pause");
    return 0;
}
