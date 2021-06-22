#include <iostream> // Library / Perpustakaan
using namespace std; // Standar namespace

int main(){ // Program utama
	
	// Deklarasi tipe data variabel
	int umur; // umur pasien
	int denyut; // denyut nadi
	int bpmMaks; // bpm maksimal
	int bpm; // beats per minute (denyut per menit) dengan rumus (bpm = denyut*4)
	int keadaan; // Keadaan pasien
	int n; // Jumlah pasien
	
	// Judul
	cout << "+======================================+" << endl; // menampilkan ke layar
	cout << "|         PROGRAM BIOLOGI DASAR        |" << endl; // menampilkan ke layar
	cout << "+======================================+" << endl; // menampilkan ke layar
	cout << "|          PROGRAM HITUNG BPM          |" << endl; // menampilkan ke layar
	cout << "+======================================+" << endl; // menampilkan ke layar
	cout << endl; // baris baru
	
	// Jumlah pasien
	cout << "Masukkan jumlah pasien : "; // menampilkan ke layar
	cin >> n; // inputan jumlah pasien
	string pasien[n]; // array nama pasien
	for(int i = 0; i < n; i++){ // Perulangan
		cout << "Masukan nama pasien ke-" << i+1 << " : "; // menampilkan ke layar
		cin >> pasien[i]; // inputan pasisen ke-...
		cout << "Masukan umur pasien ke-" << i+1 << " : "; // menampilkan ke layar
		cin >> umur; // inputan umur pasien ke-...
		
		bpmMaks = 220-umur; // Rumus BPM normal keadaan maksimal
		
		cout << "Maksimal detak jantung pasien ke-" << i+1 <<" adalah " << bpmMaks << "bpm"; // menampilkan hasil bpm ke layar
		cout << endl; // baris baru
		cout << "Berapa denyut nadi pasien ke-" << i+1 << " : "; // menampilkan ke layar
		cin >> denyut; // inputan denyut nadi
		
		bpm = denyut*4; // Rumus BPM
	
		keadaan = bpm; // Rumus Keadaan
		cout << "Jadi detak jantung pasien ke-" << i+1 << " adalah " << bpm << "bpm dalam keadaan "; // menampilkan keadaan pasien ke layar 
		
		//Percabangan if else
		if(umur <= 29){ // Penyataan 1 (umur)
			if(keadaan < 70){ // pernyataan 1.1 (keadaan)
				cout << "Sangat Baik"; // keadaan 1.1
			}
			else if(keadaan <= 77){ // pernyataan 1.2 (keadaan)
				cout << "Baik"; // keadaan 1.2
			}
			else if(keadaan <= 94){ // pernyataan 1.3 (keadaan)
				cout << "Cukup"; // keadaan 1.3
			}
			else if(keadaan > 94){ // pernyataan 1.4 (keadaan)
				cout << "Kurang"; // keadaan 1.4
			}	
		}
		else if(umur <= 39){ // Penyataan 2 (umur)
			if(keadaan < 72){ // pernyataan 2.1 (keadaan)
				cout << "Sangat Baik"; // keadaan 2.1
			}
			else if(keadaan <= 79){ // pernyataan 2.2 (keadaan)
				cout << "Baik"; // keadaan 2.2
			}
			else if(keadaan <= 96){ // pernyataan 2.3 (keadaan)
				cout << "Cukup"; // keadaan 2.3
			}
			else if(keadaan > 96){ // pernyataan 2.4 (keadaan)
				cout << "Kurang"; // keadaan 2.4
			}	
		}
		else if(umur <= 49){ // Penyataan 3 (umur)
			if(keadaan < 74){ // pernyataan 3.1 (keadaan)
				cout << "Sangat Baik"; // keadaan 3.1
			}
			else if(keadaan <= 81){ // pernyataan 3.2 (keadaan)
				cout << "Baik"; // keadaan 3.2
			}
			else if(keadaan <= 98){ // pernyataan 3.3 (keadaan)
				cout << "Cukup"; // keadaan 3.3
			}
			else if(keadaan > 98){ // pernyataan 3.4 (keadaan)
				cout << "Kurang"; // keadaan 3.4
			}	
		}
		else if(umur >= 50){ // Penyataan 4 (umur)
			if(keadaan < 76){ // pernyataan 4.1 (keadaan)
				cout << "Sangat Baik"; // keadaan 4.1
			}
			else if(keadaan <= 83){ // pernyataan 4.2 (keadaan)
				cout << "Baik"; // keadaan 4.2
			}
			else if(keadaan <= 100){ // pernyataan 4.3 (keadaan)
				cout << "Cukup"; // keadaan 4.3
			}
			else if(keadaan > 100){ // pernyataan 4.4 (keadaan)
				cout << "Kurang"; // keadaan 4.4
			}	
		}
		else{ // Pernyataan selain pernyataan diatas
			cout << "Error!"; // menampilkan error
		}
		cout << endl << endl; // baris baru
	}
	
	return 0; // Pengembalian nilai
}

