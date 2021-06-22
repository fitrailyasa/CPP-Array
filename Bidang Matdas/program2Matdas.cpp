#include <iostream> // Library atau Perpustakaan C++
using namespace std; // penggunaan namespace standar
 
int main(){ // Program Utama
	
	// Deklarasi tipe data variabel
	int n, r;  // Deklarasi variabel
    int nrfak[3]; // Deklarasi variabel n dan r faktorial
    nrfak[0] = 1; // Inisialisasi nilai variabel n faktorial
    nrfak[1] = 1; // Inisialisasi nilai variabel n r faktorial
    nrfak[2] = 1; // Inisialisasi nilai variabel r faktorial
	char ulang; // Deklarasi variabel perulangan
	int pilih; // Deklarasi variabel pilihan menu
	
	// Judul Program
	cout << "+=======================================+" << endl;
	cout << "|       PROGRAM MATEMATIKA DASAR        |" << endl;
	cout << "|        KOMBINASI & PERMUTASI          |" << endl;
	cout << "+=======================================+" << endl;
	 
	do{ /*perulangan do (Program dijalankan satu kali, setelah itu cek
		  pernyataan true atau false )*/
		cout << "+=======================================+" << endl;
		cout << "| Menu Pilihan :                        |" << endl; // menu pilihan
		cout << "| 1. Kombinasi                          |" << endl;
		cout << "| 2. Permutasi                          |" << endl;
		cout << "+=======================================+" << endl;
		cout << "Pilihan anda: ";
		cin >> pilih; // menerima inputan pilihan menu
		
		cout << "Masukkan n : ";
		cin >> n;
		cout << "Masukkan r : ";
		cin >> r;
		    
		// r tidak boleh lebih besar dari n
		while (n < r){
		    cout << "r tidak boleh lebih besar dari n" << endl;
			cout << "Masukkan n : ";
		    cin >> n;
		    cout << "Masukkan r : ";
			cin >> r;
		}
		for(int i = n; i > 0; i--){ // perulangan n faktorial
		    nrfak[0] = nrfak[0]*i;
		}
		for(int i = n-r; i > 0; i--){ // perulangan n-r faktorial
			nrfak[1] = nrfak[1]*i;
		}
		for(int i = r; i > 0; i--){ // perulangan r faktorial
		    nrfak[2] = nrfak[2]*i;
		}
		cout << endl;
		
		// Percabangan if else if
		if(pilih == 1){ // Pernyataan 1
		    cout << "Kombinasi r dari n unsur : " << nrfak[0]/(nrfak[1]*nrfak[2]);   //rumus kombinasi
		}
		else if(pilih == 2){ // Pernyataan 2
		    cout << "Permutasi r dari n unsur : " << nrfak[0]/nrfak[1];   //rumus permutasi
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
