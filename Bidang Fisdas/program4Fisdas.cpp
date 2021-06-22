#include <iostream> // Library atau Perpustakaan C++
using namespace std; // penggunaan namespace standar
 
int main(){ // Program Utama
	
	// Deklarasi tipe data variabel
	float P[2]; // Tekanan = Gaya/Luas Permukaan
	char ulang; // Deklarasi variabel perulangan
	int pilih; // Deklarasi variabel pilihan menu
	
	// Judul Program
	cout << "+=======================================+" << endl;
	cout << "|         PROGRAM FISIKA DASAR          |" << endl;
	cout << "|          TEKANAN ZAT PADAT            |" << endl;
	cout << "+=======================================+" << endl;
	 
	do{ /*perulangan do (Program dijalankan satu kali, setelah itu cek
		  pernyataan true atau false )*/
		cout << "+=======================================+" << endl;
		cout << "| Menu Pilihan :                        |" << endl; // menu pilihan
		cout << "| 1. Tekanan Zat Padat                  |" << endl;
		cout << "| 2. Besar Gaya                         |" << endl;
		cout << "| 3. Luas Permukaan                     | " << endl;
		cout << "+=======================================+" << endl;
		cout << "Pilihan anda: ";
		cin >> pilih; // menerima inputan pilihan menu
		
		// Percabangan if else if
		if(pilih == 1){ // Pernyataan 1
			cout << "Menghitung Tekanan Zat Padat" << endl;
			cout << "Masukkan besar gaya: ";
			cin >> P[0]; // menerima inputan gaya
			cout << "Masukkan luas permukaan: ";
			cin >> P[1]; // menerima inputan luas permukaan
			P[2] = P[0]/P[1]; // operator perhitungan / rumus tekanan zat padat
			cout << "Besar tekanan zat padat adalah " << P[2]; // hasil
		}
		else if(pilih == 2){ // Pernyataan 2
			cout << "Menghitung Besar Gaya" << endl;
			cout << "Masukkan besar tekanan zat padat(P): ";
			cin >> P[0]; // menerima inputan tekanan
			cout << "Masukkan luas permukaan: ";
			cin >> P[1]; // menerima inputan luas permukaan
			P[2] = P[0]*P[1]; // operator perhitungan / rumus besar gaya
			cout << "Besar gaya adalah " << P[2]; // hasil
		}
		else if(pilih == 3){ // Pernyataan 3
			cout << "Menghitung Luas Permukaan" << endl;
			cout << "Masukkan besar tekanan zat padat(P): ";
			cin >> P[0]; // menerima inputan tekanan
			cout << "Masukkan besar gaya: ";
			cin >> P[1]; // menerima inputan gaya
			P[2] = P[1]/P[0]; // operator perhitungan / rumus luas permukaan
			cout << "Besar luas permukaan adalah " << P[2]; // hasil
		}
		else{ // Pernyataan selain pernyataan diatas
			cout << "ERROR!"; // menampilkan error
		}
		cout << endl << endl; // baris baru
		// bertanya ingin mengulang atau tidak
		cout << "Ingin Hitung Lagi (Y/T)? " << endl; 
		cin >> ulang; // input jawaban Y (ya) atau T (tidak)
		cout << endl; // baris baru
	}
	/* pengulangan while dijalankan jika jawaban y (maksudnya ya)
	 dan berhenti jika jawaban selain y (maksudnya ya) */
	while (ulang == 'y' or ulang == 'Y');

	return (0); // Pengembalian nilai
}
