#include <iostream>

using namespace std;

struct node{
	char data;
	node *left;
	node *right;
};


void addNode(node **root, char isi) {
	if (*root==NULL) {
		node *baru;
		baru = new node;
		baru->data = isi;
		baru->left = NULL;
		baru->right = NULL;
		(*root)=baru;
	}
}


int main(){
	
	node *root = NULL;
	char isinya;
	
	cout << ("\n\n\n             Posisi Awal Binary Tree:             \n\n\n");
	cout << ("------------------A M I K Z J-----------------") << endl; 
	
	//level 0 
	addNode(&root,isinya='A'); 
	
	//Level 1 
	addNode(&root->left,isinya='M'); 
	addNode(&root->right,isinya='I'); 
	
	//level 2 
	addNode(&root->left->left,isinya='K'); 
	addNode(&root->right->right,isinya='Z'); 
	addNode(&root->right->right->left,isinya='J'); 
	cout << endl;
	
	cout << ("PreOrder  : ") << endl; 
	cout << ("InOrder   : ") << endl; 
	cout << ("PostOrder : "); 
	
	
	
	
	return 0;
}



















