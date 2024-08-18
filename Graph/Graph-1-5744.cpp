#include <iostream>

using namespace std;
/*
	Vertex adalah titik poin dari suatu graph.
	Edge adalah garis penghubung antara vertex satu dengan yang lain.
*/
int main() {
	
	int jumlah_vertex, jumlah_edge, sumber = 0, tujuan = 0;
	int matrix[jumlah_vertex+1][jumlah_vertex+1];
	
	cout << "jumlah_vertex: "; cin >> jumlah_vertex;
	cout << "jumlah_edge: "; cin >> jumlah_edge;
	
	// Untuk membuat matrix
	for (int i = 1; i <= jumlah_vertex; i++) {
		for (int j = 1; j <= jumlah_vertex; j++) {
			matrix[i][j] = 0;
		}
	}
	
	// Pengisian matrix asal --> tujuan
	for (int i = 1; i <= jumlah_edge; i++) {
		cout << "simpul_sumber: ";
		cin >> sumber;
		cout << "simpul_tujuan: ";
		cin >> tujuan;
			matrix[sumber][tujuan] = 1;
			matrix[tujuan][sumber] = 1;
	}
	
	// Untuk menelusuri graph dan menentukan isi dari tipe bool
	int i = 1;
	int j;
	bool ketemu;
	bool nolsemua = false;
	
	while (i <= jumlah_vertex && nolsemua == false) {
		j = 1;
		ketemu = false;
		while (j <= jumlah_vertex && ketemu == false) {
			if (matrix[i][j] == 1){
				ketemu = true;
			} else {
				j++;
			}
		}
		if (ketemu == false) {
			nolsemua = true;
		} else {
			i++;
		}
	}
	
	// Output
	if (nolsemua == true) {
		cout << "Graph tidak terhubung";
	} else {
		cout << "Graph terhubung";
	}
	
	
	
	return 0;
}