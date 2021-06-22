#include <iostream> // Library atau Perpustakaan C++
using namespace std; // penggunaan namespace standar
 
int main(){ // Program Utama
	
	// Deklarasi tipe data variabel
	float rate[1], x[1], y[1];
	char ulang; // Deklarasi variabel perulangan
	int pilih; // Deklarasi variabel pilihan menu
	
	// Judul Program
	cout << "+=======================================+" << endl;
	cout << "|         PROGRAM KIMIA DASAR           |" << endl;
	cout << "|          MOLARITAS DAN MOL            |" << endl;
	cout << "+=======================================+" << endl;
	 
	do{ /*perulangan do (Program dijalankan satu kali, setelah itu cek
		  pernyataan true atau false )*/
		cout << "+=======================================+" << endl;
		cout << "| Menu Pilihan :                        |" << endl; // menu pilihan
		cout << "| 1. Molaritas                          |" << endl;
		cout << "| 2. Mol                                |" << endl;
		cout << "+=======================================+" << endl;
		cout << "Pilihan anda: ";
		cin >> pilih; // menerima inputan pilihan menu
		
			if (pilih == 1) {
				cout << "Masukkan mol suatu zat : ";
				for(int i=0; i<1; i++) {
					cin >> x[i];
				}
				cout << endl;
				cout << "Masukkan Volume Larutan : ";
				for(int i=0; i<1; i++) {
					cin >> y[i];
				}
					
				cout << endl;
				for (int i=0; i<1; i++) {
					for (int i=0; i<1; i++) {
						cout << "Jumlah Molaritasnya adalah : " << (x[i]/y[i]) <<ends;
					}
					cout << endl;
				}
					
			}
			if (pilih == 2) {
				cout << "Masukkan massa suatu zat : ";
				for(int i=0; i<1; i++) {
				cin >> x[i];
				}
				cout << endl;
				cout << "Masukkan massa molekul relatif suatu zat : ";
				for(int i=0; i<1; i++) {
					cin >> y[i];
				}
				cout << endl;
				for (int i=0; i<1; i++) {
					for (int i=0; i<1; i++) {
						cout << "Jumlah mol zat tersebut adalah : " << (x[i]/y[i]) <<ends;
					}
					cout << endl;
				}
			}
			else{ // Pernyataan selain pernyataan diatas
			cout << "Inputan tidak valid!";
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
	return 0;	
}
