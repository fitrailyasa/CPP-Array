#include <iostream> // Library atau Perpustakaan C++
using namespace std; // penggunaan namespace standar
 
int main(){ // Program Utama
	
	// Deklarasi tipe data variabel
	int n; // Deklarasi variabel banyak buah bilangan
	float mean; // Deklarasi variabel mean (nilai rata-rata)
	float jumlah = 0; // Deklarasi variabel jumlah bilangan
	
	int x; // Deklarasi variabel jumlah modus
	int modus[100]; // Deklarasi array variabel modus (nilai sering muncul)
	int banyak[100]; // Deklarasi variabel banyak modus
	int k = 1; // Deklarasi variabel nilai yg sering muncul
	
	float med; // Deklarasi variabel median (nilai tengah)
	float nilai[100]; // Deklarasi array variabel nilai
	
	char ulang; // Deklarasi variabel perulangan
	int pilih; // Deklarasi variabel pilihan menu
	
	// Judul Program
	cout << "+=======================================+" << endl;
	cout << "|       PROGRAM MATEMATIKA DASAR        |" << endl;
	cout << "|         MEAN, MODUS & MEDIAN          |" << endl;
	 
	do{ /*perulangan do (Program dijalankan satu kali, setelah itu cek
		  pernyataan true atau false )*/
		cout << "+=======================================+" << endl;
		cout << "| Menu Pilihan :                        |" << endl; // menu pilihan
		cout << "| 1. Mean                               |" << endl;
		cout << "| 2. Modus                              |" << endl;
		cout << "| 3. Median                             | " << endl;
		cout << "+=======================================+" << endl;
		cout << "Pilihan anda: ";
		cin >> pilih; // menerima inputan pilihan menu
		
		// n = banyak buah bilangan 
		cout << "Masukkan jumlah bilangan : ";
		cin >> n;
		for(int i = 0; i < n; i++){// Perulangan n
			cout << "Masukkan nilai bilangan ke - " << i+1 <<" : ";
			cin >> nilai[i];       
		} 
		
		// Percabangan if else if
		if(pilih == 1){ // Pernyataan 1 (Mean)
			for(int i = 0; i < n; i++){ // Perulangan jumlah nilai
				jumlah = jumlah+nilai[i]; // rumus jumlah
			}
			mean = jumlah/n; // rumus mean
			cout << "Mean = " << mean;
		}
		
		else if(pilih == 2){ // Pernyataan 2 (Modus)
			// Mengurutkan data
			cout << "nilai yang diurutkan" << endl;
			for(int i = 0; i < n; i++) {
		    	for(int j = (i+1); j < n; j++) {
		    		if(nilai[i] > nilai[j]){
		        	int urut;
		        	urut = nilai[i];
		        	nilai[i] = nilai[j];    
		        	nilai[j] = urut;
		    		}
		    	}
		      cout << nilai[i] <<"  ";
			}
		
		   // Menghitung berapa kali muncul tiap angka
			for(int i = 0; i < n; i++){
		    	banyak[i] = 0;
		    	for(int j = 0; j < n; j++){
		    		if(nilai[i] == nilai[j]){
		        		banyak[i]++;
		        	}
		    	}
			}
		
		   // Menentukan nilai yang paling sering muncul
			for(int i = 0; i < n; i++){
				if(banyak[i] > k){
					k = banyak[i];
				}
			}
		
		   // Jika modus lebih dari satu
			for(int i = 0; i < n; i++){
				if(x == 0)
		   			modus[x] = 0;
		  		else
		   			modus[x] = modus[x-1];
		
				if(banyak[i] == k){
					if(nilai[i] != modus[x]){
						modus[x] = nilai[i];
						x++;
					}
				}
			}
		
		   // Jika Semua angka muncul sama banyak
			int z = 0;
			for(int i = 0; i < n; i++){
				if(banyak[i] == k){
					z++;
				}
			}
			if(z == n){
				x = 0;
			}
			cout << endl;
			
			// Hasil
			if (x == 0){
		 		cout << "Tidak Ada Modus!" << endl;	
			}
			else{
				cout << "Modus ada " << x <<" = " << endl;
				for(int i = 0; i < x; i++){
					cout << modus[i] << " ";
				}
			}
		}
		
		else if(pilih == 3){ // Pernyataan 3 (Median)
			if(n % 2 == 0){
	    		med = (nilai[(n/2)]+nilai[(n/2)-1])/2; // Jika bilangan Genap
			}
				else{
	    		med = nilai[(n/2)]; // Jika bilangan Ganjil
			}
				cout << "Median = " << med; // Hasil
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
