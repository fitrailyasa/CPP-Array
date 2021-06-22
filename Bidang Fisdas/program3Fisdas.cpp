#include <iostream> // Library atau Perpustakaan C++
using namespace std; // penggunaan namespace standar
 
int main(){ // Program Utama
	
	// Deklarasi tipe data variabel
	float Ep[2]; // Energi Potensial = massa*gravitasi*tinggi => gravitasi = 10 
	char ulang; // Deklarasi variabel perulangan
	int pilih; // Deklarasi variabel pilihan menu
	
	// Judul Program
	cout << "+=======================================+" << endl;
	cout << "|         PROGRAM FISIKA DASAR          |" << endl;
	cout << "|           ENERGI POTENSIAL            |" << endl;
	 
	do{ /*perulangan do (Program dijalankan satu kali, setelah itu cek
		  pernyataan true atau false )*/
		cout << "+=======================================+" << endl;
		cout << "| Menu Pilihan :                        |" << endl; // menu pilihan
		cout << "| 1. Energi Potensial                   |" << endl;
		cout << "| 2. Massa Benda                        |" << endl;
		cout << "| 3. Tinggi Benda dari permukaan tanah  | " << endl;
		cout << "+=======================================+" << endl;
		cout << "Pilihan anda: ";
		cin >> pilih; // menerima inputan pilihan menu
		
		// Percabangan if else if
		if(pilih == 1){ // Pernyataan 1
			cout << "Menghitung Energi Potensial" << endl;
			cout << "Masukkan nilai massa(kg): ";
			cin >> Ep[0]; // menerima inputan massa
			cout << "Masukkan tinggi benda(h): ";
			cin >> Ep[1]; // menerima inputan tinggi
			Ep[2] = Ep[0]*10*Ep[1]; // operator perhitungan / rumus Energi potensial
			cout << "Besar energi potensial adalah " << Ep[2]; // hasil
		}
		else if(pilih == 2){ // Pernyataan 3
			cout << "Menghitung Massa Benda" << endl;
			cout << "Masukkan besar energi potensial(J): ";
			cin >> Ep[0]; // menerima inputan energi potensial
			cout << "Masukkan tinggi benda(h): ";
			cin >> Ep[1]; // menerima inputan tinggi
			Ep[2] = Ep[0]/(10*Ep[1]); // operator perhitungan / rumus Massa benda
			cout << "Nilai massa benda adalah " << Ep[2]; // hasil
		}
		else if(pilih == 3){ // Pernyataan 3
			cout << "Menghitung Tinggi Benda" << endl;
			cout << "Masukkan besar energi potensial(J): ";
			cin >> Ep[0]; // menerima inputan energi potensial
			cout << "Masukkan nilai massa(kg): ";
			cin >> Ep[1]; // menerima inputan massa
			Ep[2] = Ep[0]/(Ep[1]*10); // operator perhitungan / rumus Tinggi benda
			cout << "Besar energi potensial adalah " << Ep[2]; // hasil
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
