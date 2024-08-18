#include <iostream>
#include <vector>

using namespace std;

int main() {
    int jumlah_vertex, jumlah_edge, sumber = 0, tujuan = 0, weight = 0;
    char mainMenu;

    do {
        cout << "==================Graph==================" << endl << endl;
        
        cout << "Menu Graph:" << endl;
        cout << "1. Undirected Graph" << endl;
        cout << "2. Directed Graph" << endl;
        cout << "3. Weighted Graph" << endl;
        cout << "4. Selesai" << endl;
        cout << "-----------------------------------------" << endl << endl;
        
        cout << "Masukkan pilihan Anda : "; cin >> mainMenu;
        cout << endl;
        
        switch (mainMenu) {
            case '1': {
                cout << "==================Undirected Graph==================" << endl << endl;
                
                cout << "Input Jumlah Vertex : "; cin >> jumlah_vertex;
                cout << "Input Jumlah Edge   : "; cin >> jumlah_edge;
                cout << "-----------------------------------------" << endl;
                
                vector<vector<int>> matrix(jumlah_vertex + 1, vector<int>(jumlah_vertex + 1, 0));
                vector<char> vertexInit(jumlah_vertex + 1);
                
                // Inisialisasi Vertex
                for (int i = 1; i <= jumlah_vertex; i++) {
                    cout << "Nama Vertex - [" << i << "] : "; 
                    cin >> vertexInit[i];
                }
                cout << "-----------------------------------------" << endl;
                
                // Pengisian matrix asal <--> tujuan
                for (int i = 1; i <= jumlah_edge; i++) {
                    cout << "Vertex Sumber : ";
                    cin >> sumber;
                    cout << "Vertex Tujuan : ";
                    cin >> tujuan;
                    matrix[sumber][tujuan] = 1;
                    matrix[tujuan][sumber] = 1;
                    cout << endl;
                    cout << "-----------------------------------------" << endl;
                }
                cout << endl;

                // Display edges
                cout << "Garis yang dapat dibentuk : ";
                for (int i = 1; i <= jumlah_vertex; i++) {
                    for (int j = i + 1; j <= jumlah_vertex; j++) {
                        if (matrix[i][j] == 1) {
                            cout << vertexInit[i] << vertexInit[j] << ", " << vertexInit[j] << vertexInit[i] << ", ";
                        }
                    }
                }
                cout << endl << endl;
                break;
            }
            case '2': {
                cout << "==================Directed Graph==================" << endl << endl;
                
                cout << "Input Jumlah Vertex : "; cin >> jumlah_vertex;
                cout << "Input Jumlah Edge   : "; cin >> jumlah_edge;
                cout << "-----------------------------------------" << endl;
                
                vector<vector<int>> matrix(jumlah_vertex + 1, vector<int>(jumlah_vertex + 1, 0));
                vector<char> vertexInit(jumlah_vertex + 1);
                
                // Inisialisasi Vertex
                for (int i = 1; i <= jumlah_vertex; i++) {
                    cout << "Nama Vertex - [" << i << "] : "; 
                    cin >> vertexInit[i];
                }
                cout << "-----------------------------------------" << endl;
                
                // Pengisian matrix asal --> tujuan
                for (int i = 1; i <= jumlah_edge; i++) {
                    cout << "Vertex Sumber : ";
                    cin >> sumber;
                    cout << "Vertex Tujuan : ";
                    cin >> tujuan;
                    matrix[sumber][tujuan] = 1;
                    cout << endl;
                    cout << "-----------------------------------------" << endl;
                }
                cout << endl;

                // Display edges
                cout << "Garis yang dapat dibentuk : ";
                for (int i = 1; i <= jumlah_vertex; i++) {
                    for (int j = 1; j <= jumlah_vertex; j++) {
                        if (matrix[i][j] == 1) {
                            cout << vertexInit[i] << "->" << vertexInit[j] << ", ";
                        }
                    }
                }
                cout << endl << endl;
                break;
            }
            case '3': {
                cout << "==================Weighted Graph==================" << endl << endl;
                
                cout << "Input Jumlah Vertex : "; cin >> jumlah_vertex;
                cout << "Input Jumlah Edge   : "; cin >> jumlah_edge;
                cout << "-----------------------------------------" << endl;
                
                vector<vector<int>> matrix(jumlah_vertex + 1, vector<int>(jumlah_vertex + 1, 0));
                vector<char> vertexInit(jumlah_vertex + 1);
                
                // Inisialisasi Vertex
                for (int i = 1; i <= jumlah_vertex; i++) {
                    cout << "Nama Vertex - [" << i << "] : "; 
                    cin >> vertexInit[i];
                }
                cout << "-----------------------------------------" << endl;
                
                // Pengisian matrix asal <--> tujuan dengan weight
                for (int i = 1; i <= jumlah_edge; i++) {
                    cout << "Vertex Sumber : ";
                    cin >> sumber;
                    cout << "Vertex Tujuan : ";
                    cin >> tujuan;
                    cout << "Weight        : ";
                    cin >> weight;
                    matrix[sumber][tujuan] = weight;
                    matrix[tujuan][sumber] = weight;
                    cout << endl;
                    cout << "-----------------------------------------" << endl;
                }
                cout << endl;

                // Display edge dengan weight
                cout << "Garis yang dapat dibentuk : ";
                for (int i = 1; i <= jumlah_vertex; i++) {
                    for (int j = i + 1; j <= jumlah_vertex; j++) {
                        if (matrix[i][j] != 0) {
                            cout << vertexInit[i] << "-" << vertexInit[j] << " (Weight: " << matrix[i][j] << "), ";
                        }
                    }
                }
                cout << endl << endl;
                break;
            }
            case '4':
                break;
            default:
                cout << "Pilihan Anda tidak ditemukan!" << endl;
                break;
        }
    } while (mainMenu != '4');
    
    return 0;
}
