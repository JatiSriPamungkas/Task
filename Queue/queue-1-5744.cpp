#include <iostream>

using namespace std;

const int MAX_QUEUE = 5;

struct Queue {
    int depan;
    int belakang;
    int data[MAX_QUEUE];
};

void inisialisasi();
void enqueue(int data); 
void dequeue();
void clear();
bool isEmpty();
bool isFull();
void print();

Queue queue;

int main() {

    inisialisasi();

    int pilihanMenu;
    int data;

    do {
    cout << ">>> PILIHAN MENU QUEUE <<<" << endl << endl;
    cout << "1. Menambah item Queue" << endl;
    cout << "2. Menghapus item Queue" << endl;
    cout << "3. Menampilkan item Queue" << endl;
    cout << "4. Mengosongkan Queue" << endl;
    cout << "5. Selesai" << endl << endl;

    cout << "Masukkan Pilihan Anda:> "; cin >> pilihanMenu;
    cout << endl;
        switch (pilihanMenu) {
            case 1:
                cout << "Masukkan data: "; cin >> data;
                enqueue(data);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                print();
                break;
            case 4:
                clear();
                break;
            case 5:
                break;
        }
    } while (pilihanMenu != 5);

    cout << endl;
    system("pause");
    return 0;
}

void inisialisasi() 
{
    queue.depan = queue.belakang = -1;
}

void enqueue(int data)
{
    queue.depan = 0;
    queue.belakang++;
    queue.data[queue.belakang] = data;
    cout << "Data berhasil ditambahkan" << endl << endl;
}

void dequeue()
{
    cout << "Data " << queue.data[queue.depan] << " sudah dihapus" << endl << endl;
    for (int i = queue.depan; i <= queue.belakang; i++) {
        queue.data[i] = queue.data[i + 1];
    }
    queue.belakang--;
}

void clear() 
{
    queue.depan = queue.belakang = -1;
    cout << "Queue sudah dikosongkan" << endl << endl;
}

bool isEmpty()
{
    return (queue.belakang == -1);
}

bool isFull()
{
    return (queue.belakang >= (MAX_QUEUE - 1));
}

void print()
{
    cout << "Isi queue : ";
    for (int i = queue.depan; i <= queue.belakang; i++) {
        cout << queue.data[i] << " ";
    }
    cout << endl << endl;
}