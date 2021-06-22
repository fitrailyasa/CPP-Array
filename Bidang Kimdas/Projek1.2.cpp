#include <iostream> // Library atau Perpustakaan C++
using namespace std; // penggunaan namespace standar
 
int main(){ // Program Utama
	
	// Deklarasi tipe data variabel
	//deklarasi array bertipe data string sebanyak 8 sesuai dengan banyakknya golongan A dalam tabel periodik
	string gol1A[7] = {"Hidrogen", "Litium", "Natrium", "Kalium", "Rubidium", "Sesium","Frensium"};
	string gol2A[6] = {"Berilium","Magnesium","Kalsium","Stronsium","Barium","Radium"};
	string gol3A[5] = {"Boron","Aluminium","Galium","Indium","Thalium"};
	string gol4A[5] = {"Carbon","Silikon","Germanium","Timah","Timbal"};
	string gol5A[5] = {"Nitrogen","Fosfor","Arsen","Antimon","Bismuth"};
	string gol6A[5] = {"oksigen","Belerang","Selenium","Telerium","Polonium"};
	string gol7A[5] = {"Fluor","Klor","Brom","Yodium","Astatin"};
	string gol8A[6] = {"Helium","Neon","argon","Kripton","Xenon","Radon"};
	
	char ulang; // Deklarasi variabel perulangan
	int pilih; // Deklarasi variabel pilihan menu
	
	// Judul Program
	cout << "+=====================================+" << endl;
	cout << "|         PROGRAM KIMIA DASAR         |" << endl;
	cout << "|      Tabel Periodik Golongan A      |" << endl;
	cout << "+=====================================+" << endl;
	
	do{ /*perulangan do (Program dijalankan satu kali, setelah itu cek
		pernyataan true atau false )*/
		cout << "+=====================================+" << endl;
		cout << "| 1. Golongan 1A                      |" << endl;
		cout << "| 2. Golongan 2A                      |" << endl;
		cout << "| 3. Golongan 3A                      |" << endl;
		cout << "| 4. Golongan 4A                      |" << endl;
		cout << "| 5. Golongan 5A                      |" << endl;
		cout << "| 6. Golongan 6A                      |" << endl;
		cout << "| 7. Golongan 7A                      |" << endl;
		cout << "| 8. Golongan 8A                      |" << endl;
		cout << "+=====================================+" << endl;
		cout << "Pilih golongan berapa yang ingin dilihat : ";
		cin >> pilih;
	
		//percabangan if else => untuk mengecek pilihan
		if(pilih == 1){
			cout << "Tabel periodik untuk golongan 1 A terdiri dari : " << endl;
			// Perulangan for => untuk mencetak tiap elemen dalam array
			for(int i = 0; i < 7; i++){
				cout << gol1A[i] << endl;
			}
		}else if(pilih == 2){
			cout << "Tabel periodik untuk golongan 2 A terdiri dari : " << endl;
			for(int i = 0; i < 7; i++){
				cout << gol2A[i] << endl;
			}	
		}else if(pilih == 3){
			cout << "Tabel periodik untuk golongan 3 A terdiri dari : " << endl;
			for(int i = 0; i < 5; i++){
				cout << gol3A[i] << endl;
			}
		}else if(pilih == 4){
			cout << "Tabel periodik untuk golongan 4 A terdiri dari : " << endl;
			for(int i = 0; i < 5; i++){
				cout << gol4A[i] << endl;	
			}
		}else if(pilih == 5){
			cout << "Tabel periodik untuk golongan 5 A terdiri dari : " << endl;
			for(int i = 0; i < 5; i++){
				cout << gol5A[i] << endl;	
			}
		}else if(pilih == 6){
			cout << "Tabel periodik untuk golongan 6 A terdiri dari : " << endl;
			for(int i = 0; i < 5; i++){
				cout << gol6A[i] << endl;	
			}
		}else if(pilih == 7){
			cout << "Tabel periodik untuk golongan 7 A terdiri dari : " << endl;
			for(int i = 0; i < 5; i++){
				cout << gol7A[i] << endl;	
			}
		}else if(pilih == 8){
			cout << "Tabel periodik untuk golongan 8 A terdiri dari : " << endl;
			for(int i = 0; i < 6; i++){
				cout << gol8A[i] << endl;	
			}
		}else {
			cout << "Maaf data tidak tersedia!" << endl;
		}
		cout << endl << endl;
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
