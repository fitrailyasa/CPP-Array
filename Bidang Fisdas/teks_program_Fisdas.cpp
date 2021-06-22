#include <iostream> // Library atau Perpustakaan C++
using namespace std; // penggunaan namespace standar
 
int main(){ // Program Utama
	
	// Deklarasi tipe data variabel
	char nama[25]; // Deklarasi array variabel nama
	char ulang; // Deklarasi variabel perulangan
	int pilih; // Deklarasi variabel pilihan menu
	float kec[3]; // Deklarasi array rumus (kecepatan = s/t)
	// kec[1] = jarak (s), kec[2] = waktu (t), kec[3] = kecepatan
	float frek[2]; // Deklarasi array rumus (frekuensi = 1/T)
	// frek[1] = periode (T), frek[2] = frekuensi
	float gaya[3]; // Deklarasi variabel rumus (gaya = m*a)
	// gaya[1] = m (massa), gaya[2] = a (gravitasi), gaya[3] = besar gaya
	float mJenis[3]; // Deklarasi variabel rumus (massa jenis = m/v)
	// mJenis[1] = m (massa), mJenis[2] = v (volume), mJenis[3] = massa jenis
	
	// Judul Program
	cout << "|=====================================|" << endl;
	cout << "|        PROGRAM FISIKA DASAR         |" << endl;
	cout << "|         BY : FITRA ILYASA           |" << endl;
	cout << "|=====================================|" << endl;
	cout << endl;
	
	// Nama user (pengguna)
	cout << "Masukkan nama anda : "; 
	cin.getline(nama,25); // input nama user 
	cout << "Hai " << nama << endl; // salam kepada user
	 
	do{ /*perulangan do (Program dijalankan satu kali, setelah itu cek
		  pernyataan true atau false )*/
		cout << "Menu Pilihan : " << endl; // menu pilihan
		cout << "1. Kecepatan" << endl;
		cout << "2. Frekuensi Getaran" << endl;
		cout << "3. Besar Gaya" << endl;
		cout << "4. Massa Jenis" << endl;
		cout << "Pilihan anda: ";
		cin >> pilih; // menerima inputan pilihan menu
		
		// Percabangan if else if
		if(pilih == 1){ // Pernyataan 1
			cout << "1. Menghitung Kecepatan" << endl;
			cout << "Masukkan nilai jarak(m): ";
			cin >> kec[1]; // menerima inputan jarak
			cout << "Masukkan nilai waktu(s): ";
			cin >> kec[2]; // menerima inputan waktu
			kec[3] = kec[1]/kec[2]; // operator perhitungan / rumus kecepatan
			cout << "Nilai Kecepatan adalah: " << kec[3]; // hasil
		}else if(pilih == 2){ // Pernyataan 2
			cout << "2. Menghitung Frekuensi Getaran" << endl;
			cout << "Masukkan nilai Periode Getaran: ";
			cin >> frek[1]; // menerima inputan periode getaran
			frek[2] = 1/frek[1]; // operator perhitungan / rumus frekuensi
			cout << "Nilai Frekuensi Getaran adalah: " << frek[2]; // hasil
		}else if(pilih == 3){ // Pernyataan 3
			cout << "3. Menghitung Massa Jenis" << endl;
			cout << "Masukkan nilai massa(kg): ";//menampilkan ke layar
			cin >> mJenis[1];//menerima inputan massa
			cout << "Masukkan nilai volume(m3): ";//menampilkan ke layar
			cin >> mJenis[2];//menerima inputan volume
			mJenis[3] = mJenis[1]/mJenis[2]; // operator perhitungan / rumus massa jenis
			cout << "Nilai Massa Jenis adalah: " << mJenis[3]; // hasil
		}else if(pilih == 4){ // Pernyataan 4
			cout << "4. Menghitung Besar Gaya" << endl;
			cout << "Masukkan nilai massa(kg): ";
			cin >> gaya[1]; // menerima inputan massa
			cout << "Masukkan nilai percepatan gravitasi bumi(m3): ";
			cin >> gaya[2]; // menerima inputan gravitasi
			gaya[3] = gaya[1]*gaya[2]; // operator perhitungan / rumus gaya
			cout << "Nilai Massa Jenis adalah: " << gaya[3]; // hasil
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
