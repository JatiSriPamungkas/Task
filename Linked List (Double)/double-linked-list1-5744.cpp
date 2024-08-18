#include <iostream>

using namespace std;

struct Node {
	int data;
	Node *next, *prev;
};

Node *head, *tail, *print, *del, *newNode;

bool isEmpty(); 
void insertNode(int data);  
void deleteFromFront();  
void printNode(); 

int main() {
	char mainMenu;
	do {
		cout << "-------------------------------" << endl;
		cout << "DOUBLE LINKED LIST NON CIRCULAR" << endl;
		cout << "-------------------------------" << endl;
		cout << "Menu:" << endl;
		cout << "1. Menambahkan Node" << endl;
		cout << "2. Menghapus Node dari Depan" << endl;
		cout << "3. Menampilkan Node" << endl;
		cout << "4. Selesai" << endl;
		cout << "-------------------------------" << endl;
		cout << endl;
		
		cout << "Masukkan pilihan Anda : "; cin >> mainMenu;
		
		switch (mainMenu) {
			case '1':
				int data;
				cout << "Input Data : "; cin >> data;
				insertNode(data);
				break;
			case '2':
				deleteFromFront();
				break;
			case '3':
				printNode();
				break;
			case '4':
				break;
		}
	} while (mainMenu != 4);
}

bool isEmpty() { 
	return (head == NULL && tail == NULL);
}

void insertNode(int data) { 
      newNode = new Node; 
      newNode->data = data; 
      newNode->next = NULL; 
      newNode->prev = NULL; 
      if(isEmpty()==1) 
      { 
            head = newNode; 
            head->next = NULL; 
            head->prev = NULL; 
            tail=head; 
      } 
      else 
      { 
            tail->next = newNode; 
            newNode->prev = tail; 
            tail = newNode; 
      } 
}

void deleteFromFront() { 
      int simpan; 
      if(head != NULL)  
      { 
            if(head->next != NULL) 
            { 
	            del = head; 
	            simpan = head->data; 
	            cout<<"\n"<<simpan<<" telah dihapus"<<endl; 
	            head = head->next;
	            head->prev = NULL;
	            delete del;
            } 
            else 
            { 
                  simpan = head->data; 
                  cout<<"\n"<<simpan<<" telah dihapus"<<endl; 
                  head = NULL; 
            } 
 
      } else 
        	cout<<"\nLinked List kosong penghapusan tidak dapat dilakukan"<<endl; 
} 

void printNode() { 
	print = head; 
	if(head!=NULL) { 
		int i = 1;
		cout  << "Isi Linked List : ";
		while(print!=NULL) { 
			cout << print->data << "<= =>";
			print = print->next; 
			i++;
		} 
		cout << endl;
	} else 
		cout<<"\nTidak ada data dalam linked list"<<endl;	 
		 
} 






























