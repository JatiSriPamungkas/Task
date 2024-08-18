#include <iostream>

using namespace std;

// Fungsi untuk menghitung jumlah kata dari string menggunakan pointer
int hitungJumlahKata(const char *str) {
    int jumlahKata = 0;
    bool dalamKata = false;

    // Loop melalui setiap karakter dalam string
    while (*str != '\0') {
        // Jika karakter saat ini bukan spasi, artinya kita sedang berada dalam sebuah kata
        if (*str != ' ' && *str != '\n' && *str != '\t') {
            // Jika sebelumnya bukan dalam kata (karena tanda spasi),
            // maka ini adalah awal dari kata baru
            if (!dalamKata) {
                dalamKata = true;
                jumlahKata++;
            }
        } else {
            // Jika karakter saat ini adalah spasi, tab, atau newline, kita bukan lagi dalam sebuah kata
            dalamKata = false;
        }
        // Pindahkan pointer ke karakter berikutnya
        str++;
    }

    return jumlahKata;
}

int main() {
    const int MAX_PANJANG_STRING = 1000;
    char stringInput[MAX_PANJANG_STRING];

    cout << "Masukkan Kalimat: ";
    cin.getline(stringInput, MAX_PANJANG_STRING);

    // Menghitung jumlah kata dalam string
    int jumlahKata = hitungJumlahKata(stringInput);

    cout << "Jumlah kata dalam kalimat " << stringInput << " adalah: " << jumlahKata << endl;

    cout << endl << endl;
	system("pause");
    return 0;
}
