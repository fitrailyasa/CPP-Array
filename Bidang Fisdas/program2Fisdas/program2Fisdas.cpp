#include <iostream> // Library atau Perpustakaan C++
using namespace std; // penggunaan namespace standar
 
int main(){ // Program Utama
	
	// Deklarasi tipe data variabel
	char nama[25]; // Deklarasi array variabel nama
	char ulang; // Deklarasi variabel perulangan
	int pilih; // Deklarasi variabel pilihan menu
	float gaya[3]; // Deklarasi variabel rumus (gaya = m*a)
	// gaya[1] = m (massa), gaya[2] = a (gravitasi), gaya[3] = besar gaya
	float mJenis[3]; // Deklarasi variabel rumus (massa jenis = m/v)
	// mJenis[1] = m (massa), mJenis[2] = v (volume), mJenis[3] = massa jenis
	
	// Judul Program
	cout << "+=====================================+" << endl;
	cout << "|        PROGRAM FISIKA DASAR         |" << endl;
	cout << "|      BESAR GAYA & MASSA JENIS       |" << endl;
	cout << "+=====================================+" << endl;
	cout << endl;
	
	// Nama user (pengguna)
	cout << "Masukkan nama anda : "; 
	cin.getline(nama,25); // input nama user 
	cout << "Hai " << nama << endl; // salam kepada user
	 
	do{ /*perulangan do (Program dijalankan satu kali, setelah itu cek
		  pernyataan true atau false )*/
		cout << "Menu Pilihan : " << endl; // menu pilihan
		cout << "1. Massa Jenis" << endl;
		cout << "2. Besar Gaya" << endl;
		cout << "Pilihan anda: ";
		cin >> pilih; // menerima inputan pilihan menu
		
		// Percabangan if else if
		if(pilih == 1){ // Pernyataan 1
			cout << "1. Menghitung Massa Jenis" << endl;
			cout << "Masukkan nilai massa(kg): ";//menampilkan ke layar
			cin >> mJenis[1];//menerima inputan massa
			cout << "Masukkan nilai volume(m3): ";//menampilkan ke layar
			cin >> mJenis[2];//menerima inputan volume
			mJenis[3] = mJenis[1]/mJenis[2]; // operator perhitungan / rumus massa jenis
			cout << "Nilai Massa Jenis adalah: " << mJenis[3]; // hasil
		}else if(pilih == 2){ // Pernyataan 2
			cout << "2. Menghitung Besar Gaya" << endl;
			cout << "Masukkan nilai massa(kg): ";
			cin >> gaya[1]; // menerima inputan massa
			cout << "Masukkan nilai percepatan gravitasi bumi(m3): ";
			cin >> gaya[2]; // menerima inputan gravitasi
			gaya[3] = gaya[1]*gaya[2]; // operator perhitungan / rumus gaya
			cout << "Besar Gaya adalah: " << gaya[3]; // hasil
		}else{ // Pernyataan selain pernyataan diatas
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
