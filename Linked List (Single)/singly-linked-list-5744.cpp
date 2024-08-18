#include <iostream>
#include <string>

using namespace std;
struct Node {
	string data;
	Node *next;
};

Node *headNode = NULL;
Node *currentNode = NULL;

bool isEmpty();
void insertNode(string data);
void deleteFromFront();
void deleteFromEnd();
void deleteAll();

bool isEmpty() {
	return (headNode == NULL);
}

void insertNode(string data) { 
	// deklarasi pointer newNode; 
	Node *newNode = NULL; 
	 
	// mengalokasikan memory untuk pointer newNode
	newNode = new Node; 
	 
	// isikan data ke node  yang baru 
	newNode->data = data; 
	 
	if (isEmpty()) // node masih kosong 
	{ 
		// node baru otomatis menjadi headnode 
		headNode = newNode;
	} 
	else // sudah ada node 
	{ 
		// hubungkan pointer next node aktif (current node) 
		// ke node yg baru 
		currentNode->next = newNode; 
	} 
 
	// set node baru sebagai node aktif 
	currentNode = newNode; 
	 
	// set pointer next node terakhir menjadi NULL 
	currentNode->next = NULL;
	
	cout << "Node berhasil ditambahkan" << endl << endl;
}

void deleteFromFront() { 
	if (!isEmpty()) 
	{ 
		// deklarasi var bantu untuk menampung headNode 
		Node *hapusNode = headNode; 
		 
		// pindahkan headNode ke node berikutnya 
		headNode = headNode->next; 
		 
		// hapus headNode yang lama 
		delete hapusNode; 
		 
		cout << "Node berhasil dihapus" << endl << endl; 
	} else {
		cout << "List masih kosong!" << endl;
	}
}

void deleteFromEnd() { 
	if (headNode == currentNode) 
	{ 
		headNode = NULL; 
		currentNode = NULL; 
		 
		return; 
	}  
	 
	// deklarasi pointer bantu untuk menampung headnode 
	Node *bantu = headNode; 
	 
	// deklarasi pointer hapus untuk menampung current node 
	Node *hapusNode = currentNode; 
	 
	// lakukan perulangan sebelum mencapai akhir node 
	while (bantu->next != currentNode) 
	{ 
		bantu = bantu->next; 
	} 
	 
	currentNode = bantu; 
	currentNode->next = NULL; 
	 
	delete hapusNode;
}

void deleteAll() { 
	Node *bantu, *hapusNode; 
	bantu = headNode; 
	// lakukan perulangan sebelum mencapai akhir node 
	while (bantu->next != currentNode) 
	{ 
		hapusNode = bantu; 
		bantu = bantu -> next; 
		 
		delete hapusNode; 
	} 
	 
	headNode = NULL; 
	currentNode = NULL;

}

void printNode() 
{ 
	// deklarasi pointer awal node untuk menampung headnode 
	Node *awalNode = headNode; 
	int i = 1; 
	while (awalNode != NULL) 
	{ 
		cout << "Data pada node #" << i << " = " << awalNode -> data << endl; 
		awalNode = awalNode->next; 
		i++; 
	}
}


int main() {
	
	char mainMenu;
	string data;
	
	do{
		cout << ">>> PILIHAN MENU SINGLY LINKED LIST <<<" <<endl << endl;
		
		cout << "1. Menambahkan Node" << endl;
		cout << "2. Menghapus Node dari Depan" << endl;
		cout << "3. Menghapus Node dari Belakang" << endl;
		cout << "4. Mengosongkan Node" << endl;
		cout << "5. Menampilkan Node" << endl;
		cout << "6. Selesai" << endl << endl;
		
		cout << "Masukkan pilihan Anda : "; cin >> mainMenu;
		cout << endl;
		
		
		switch(mainMenu) {
			case '1':
				cout << "Masukkan data : ";
				cin.ignore();
				getline(cin, data);
				insertNode(data);
				break;
			case '2':
				if (!isEmpty()) {
					deleteFromFront();
				} else {
					cout << "List masih Kosong!!!" << endl << endl;
				}
				break;
			case '3':
				if (!isEmpty()) {
					deleteFromEnd();
				} else {
					cout << "List masih Kosong!!!" << endl << endl;
				}
				break;
			case '4':
				if (!isEmpty()) {
					deleteAll();
				} else {
					cout << "List masih Kosong!!!" << endl << endl;
				}
				break;
			case '5':
				if (!isEmpty()) {
					printNode();
				} else {
					cout << "List masih Kosong!!!" << endl << endl;
				}
				break;
			case '6':
				break;
			default:
				cout << "Menu yang Anda pilih tidak terdaftar!!!" << endl << endl;
				break;
				
		} 
	}while (mainMenu != '6');
	
	return 0;
}















