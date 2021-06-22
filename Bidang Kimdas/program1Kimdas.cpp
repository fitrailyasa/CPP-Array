#include <iostream> // Library atau Perpustakaan C++
using namespace std; // penggunaan namespace standar
 
int main(){ // Program Utama
	
	// Deklarasi tipe data variabel
	int x, i, j, k, l;
	float n[i], m[i], Mr[i];
	float M[i], V[i];
	float P[j], T[j];
	float R = 0.082;
	char ulang; // Deklarasi variabel perulangan
	int pilih; // Deklarasi variabel pilihan menu
	
	// Judul Program
	cout << "+========================================+" << endl;
	cout << "|          PROGRAM KIMIA DASAR           |" << endl;
	cout << "|    KONSENTRASI LARUTAN & VOLUME GAS    |" << endl;
	cout << "+========================================+" << endl;
	
	do{ /*perulangan do (Program dijalankan satu kali, setelah itu cek
		  pernyataan true atau false )*/
		cout <<"Masukkan banyaknya percobaan : ";
		cin >> x;
		cout << endl;
		
		for (i = 1; i <= x; i++){ // Perulangan for untuk banyak jumlah senyawa atau unsur
			cout << "Masukkan Massa Senyawa atau Unsur ke-" << i << " = ";
			cin >> m[i];
			cout << "Masukkan Massa Molekul Relatif Senyawa atau Unsur ke-" << i << " = ";
			cin >> Mr[i];
			n[i] = m[i]/Mr[i];
		}
		for (k = 1; k <= x; k++){ // Perulangan for untuk banyak jumlah zat
			cout << "Hasil perhitungan jumlah zat yang didapat pada senyawa ke-" << k << " = " << n[k] << endl;
		}
		cout << "Setelah ini anda akan menghitung : " << endl;
		cout << "1. Konsentrasi larutan" << endl;
		cout << "2. Volume Gas" << endl;
		cout << "Pilihlah salah satu.....";
		cin >> pilih;
		
		if (pilih == 1){ // Pernyataan 1 (Konsentrasi larutan)
			for (j = 1; j <= x; j++){ // Perulangan for untuk banyak jumlah volume larutan
				cout << "Masukan Volume larutan ke-" << j <<" = ";
				cin >> V[j];
				M[j]= n[j]/V[j];
			}
			for (l = 1; l <= x; l++){ // Perulangan for untuk banyak jumlah konsentrasi larutan
				cout << "Konsentrasi Larutan Ke-" << l << " = " << M[l] << endl;
			}
		}
		else if (pilih == 2){ // Pernyataan 2 (Volume Gas)
			for (j = 1; j <= x; j++){ // Perulangan for untuk banyak jumlah tekanan dan suhu
				cout << "Masukkan Tekanan Gas (dalam atm) ke-" << j << " = ";
				cin >> P[j];
				cout << "Masukkan suhu (dalam Kelvin) ke-" << j << "      = ";
				cin >> T[j];
				V[j] = (n[j]*R*T[j])/P[j];
			}
			for (l = 1; l <= x; l++){ // Perulangan for untuk banyak jumlah volume gas
				cout << "Volume Gas ke-" << l << " = " << V[l] << endl;
			}
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
