#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next, *prev;
};

Node *head = NULL, *tail = NULL, *print, *del, *newNode;

// Inisialisasi Method
bool isEmpty(); 
void insertFromFront(int data1);
void insertFromMiddle(int data2, int posisi);
void insertFromBack(int data3);
void deleteFromFront();  
void deleteFromMiddle(int posisi);  
void deleteFromBack();  
void deleteAllNodes();  
void printNode(); 

int main() {
    char mainMenu;
    do {
        cout << "-------------------------------" << endl;
        cout << "DOUBLE LINKED LIST NON CIRCULAR" << endl;
        cout << "-------------------------------" << endl;
        cout << "Menu:" << endl;
        cout << "1. Menambahkan Node dari Depan" << endl;
        cout << "2. Menambahkan Node dari Tengah" << endl;
        cout << "3. Menambahkan Node dari Belakang" << endl;
        cout << "4. Menghapus Node dari Depan" << endl;
        cout << "5. Menghapus Node dari Tengah" << endl;
        cout << "6. Menghapus Node dari Belakang" << endl;
        cout << "7. Menghapus Semua Node" << endl;
        cout << "8. Menampilkan Node" << endl;
        cout << "9. Selesai" << endl;
        cout << "-------------------------------" << endl;
        cout << endl;

        cout << "Masukkan pilihan Anda : "; cin >> mainMenu; 

        switch (mainMenu) {
            case '1': { // Sisip dari Depan
                int data;
                cout << "Input Data : "; cin >> data;
                insertFromFront(data);
                break;
            }
            case '2': { // Sisip dari Tengah
                int data, posisi;
                cout << "Input Data : "; cin >> data;
                cout << "Masukkan Posisi : "; cin >> posisi;
                insertFromMiddle(data, posisi);
                break;
            }
            case '3': { // Sisip dari Belakang
                int data;
                cout << "Input Data : "; cin >> data;
                insertFromBack(data);
                break;
            }
            case '4': { // Hapus dari Depan
                deleteFromFront();
                break;
            }
            case '5': { // Hapus dari Tengah
                int posisi;
                cout << "Masukkan Posisi : "; cin >> posisi;
                deleteFromMiddle(posisi);
                break;
            }
            case '6': { // Hapus dari Belakang
                deleteFromBack();
                break;
            }
            case '7': { // Hapus Semua Node
                deleteAllNodes();
                break;
            }
            case '8': { // Tampilkan Data
                printNode();
                break;
            }
            case '9': { // Selesai
                break;
            }
            default:
                cout << "Pilihan Anda tidak Ditemukan!" << endl << endl;
                break;
        }
    } while (mainMenu != '9');
}

bool isEmpty() { 
    return (head == NULL && tail == NULL);
}

void insertFromFront(int data1) {
	char ulang;
	do {
	    newNode = new Node;
	    newNode->data = data1;
	    newNode->next = NULL;
	    newNode->prev = NULL;
	    
	    if(isEmpty()) {
	        head = newNode;
	        tail = newNode;
	    } else {
	        newNode->next = head;
	        head->prev = newNode;
	        head = newNode;
	    }
		
		cout << "\nKembali ke menu? (y/n): "; 
        cin >> ulang;
        
        if(ulang == 'n' || ulang == 'N') {
            cout << "Input Data: "; cin >> data1;
        }
	} while (ulang == 'n' || ulang == 'N');
}

void insertFromMiddle(int data2, int posisi) {
	char ulang;
	do {
	    if(posisi == 1) {
	        insertFromFront(data2);
	    } else {
	        newNode = new Node;
	        newNode->data = data2;
	        newNode->next = NULL;
	        newNode->prev = NULL;
	        
	        Node *temp = head;
	        for(int i = 1; i < posisi-1; i++) {
	            if(temp != NULL) {
	                temp = temp->next;
	            }
	        }
	        
	        if(temp != NULL) {
	            newNode->next = temp->next;
	            newNode->prev = temp;
	            if(temp->next != NULL) {
	                temp->next->prev = newNode;
	            }
	            temp->next = newNode;
	        } else {
	            cout << "Posisi tidak ditemukan" << endl;
	        }
	    }
	    
	    cout << "\nKembali ke menu? (y/n): "; 
        cin >> ulang;
        
        if(ulang == 'n' || ulang == 'N') {
            cout << "Input Data: "; cin >> data2;
            cout << "Masukkan Posisi : "; cin >> posisi;
            
        }
	} while (ulang == 'n' || ulang == 'N');
}

void insertFromBack(int data) { 
    char ulang;
    do {
        newNode = new Node; 
        newNode->data = data; 
        newNode->next = NULL; 
        newNode->prev = NULL; 
        if(isEmpty()) { 
            head = newNode; 
            tail = newNode; 
        } else {
            tail->next = newNode; 
            newNode->prev = tail; 
            tail = newNode; 
        } 
        
        cout << "\nKembali ke menu? (y/n): "; 
        cin >> ulang;
        
        if(ulang == 'n' || ulang == 'N') {
            cout << "Masukkan data baru: ";
            cin >> data;
        }
    } while (ulang == 'n' || ulang == 'N');
}

void deleteFromFront() { 
    int simpan; 
    if(head != NULL) { 
        if(head->next != NULL) { 
            del = head; 
            simpan = head->data; 
            cout << "\n" << simpan << " telah dihapus" << endl; 
            head = head->next;
            head->prev = NULL;
            delete del;
        } else { 
            simpan = head->data; 
            cout << "\n" << simpan << " telah dihapus" << endl; 
            head = NULL; 
            tail = NULL;
        } 
    } else {
        cout << "\nLinked List kosong, penghapusan tidak dapat dilakukan" << endl; 
    }
} 

void deleteFromMiddle(int posisi) {
    if(posisi == 1) {
        deleteFromFront();
    } else {
        Node *temp = head;
        for(int i = 1; i < posisi; i++) {
            if(temp != NULL) {
                temp = temp->next;
            }
        }
        
        if(temp != NULL && temp->prev != NULL) {
            Node *del = temp;
            temp->prev->next = temp->next;
            if(temp->next != NULL) {
                temp->next->prev = temp->prev;
            }
            delete del;
        } else {
            cout << "\nLinked List kosong, penghapusan tidak dapat dilakukan" << endl; 
        }
    }
}

void deleteFromBack() {
    int simpan;
    if(tail != NULL) {
        if(tail->prev != NULL) {
            del = tail;
            simpan = tail->data;
            cout << "\n" << simpan << " telah dihapus" << endl;
            tail = tail->prev;
            tail->next = NULL;
            delete del;
        } else {
            simpan = tail->data;
            cout << "\n" << simpan << " telah dihapus" << endl;
            head = NULL;
            tail = NULL;
        }
    } else {
        cout << "\nLinked List kosong, penghapusan tidak dapat dilakukan" << endl;
    }
}

void deleteAllNodes() {
    if (tail != NULL) {	
		while(head != NULL) {
	        del = head;
	        head = head->next;
	        delete del;
	    }
	    tail = NULL;
	    cout << "Semua node telah dihapus" << endl;
	} else {
		cout << "\nLinked List kosong, penghapusan tidak dapat dilakukan" << endl;
	}
}

void printNode() { 
    print = head; 
    if(head != NULL) { 
        cout << "Isi Linked List : ";
        while(print != NULL) { 
            cout << print->data << " <= => ";
            print = print->next; 
        } 
        cout << endl;
    } else {
        cout << "\nTidak ada data dalam linked list" << endl;     
    } 
}
