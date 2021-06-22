#include <iostream> // Library atau Perpustakaan C++
using namespace std; // penggunaan namespace standar
 
int main(){ // Program Utama
	
	// Deklarasi tipe data variabel
	float jumlah[4]; //array jumlah dapat menampung 4 nilai
	int pilih;
	char ulang;
	
	// Judul
	cout << "+=======================================+" << endl;
	cout << "|         PROGRAM FISIKA DASAR          |" << endl;
	cout << "|   KECEPATAN DAN KECEPATAN RATA-RATA   |" << endl;
	cout << "+=======================================+" << endl;
	
	do{ /*perulangan do (Program dijalankan satu kali, setelah itu cek
		pernyataan true atau false )*/
		cout << "+=======================================+" << endl;
		cout << "| Menu Pilihan :                        |" << endl; // menu pilihan
		cout << "| 1. Kecepatan                          |" << endl;
		cout << "| 2. Kecepatan Rata-rata                |" << endl;
		cout << "+=======================================+" << endl;
		cout << "Pilihan anda: ";
		cin >> pilih; // menerima inputan pilihan menu
		
		if (pilih == 1) { //percabangan jika kita memilih 1 maka proses ini yang akan dilakukan
			cout << "Masukkan nilai jarak yang ditempuh = " ;
			cin >> jumlah[0];
			cout << "Masukkan nilai waktu tempuh = " ;
			cin >> jumlah[1] ;
			cout << "Nilai kecepatan benda ini adalah ";
			cout << jumlah[0] / jumlah[1] << " km/jam" << endl; //proses untuk mencari nilai kecepatan dengan menggunakan rumus kecepatan
			}
		else if (pilih == 2){
			cout << "Masukkan nilai jarak yang ditempuh = " ;
			cin >> jumlah[0];
			cout << "Masukkan nilai waktu tempuh = " ;
			cin >> jumlah[1] ;
			cout << "Masukkan nilai jarak yang ditempuh yang kedua = " ;
			cin >> jumlah[2];
			cout << "Masukkan nilai waktu tempuh yang kedua = ";
			cin >> jumlah[3];
			cout << "Nilai kecepatan rata-rata benda ini adalah : ";
			cout <<  (jumlah[0] * jumlah[1] + jumlah[2] * jumlah[3])  / (jumlah[1] + jumlah[3]) << "km/jam" << endl; //proses mencari nilai kecepatan rata-rata	
				
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

	return (0); // Pengembalian nilai
}
