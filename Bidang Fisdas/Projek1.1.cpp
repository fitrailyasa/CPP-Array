#include <iostream> 
using namespace std; 
 
int main(){ //fungsi main
	char nama[25]; //deklarasi variabel nama
	float m, v, s, t, a, T; //deklarasi variabel rumus
	float mjenis, kec, gaya, frekuensi; //deklarasi variabel 
	char ulang; // Deklarasi variabel perulangan
	int pilih; // Deklarasi variabel pilihan menu
	

	cout << "Selamat datang mahasiswa Itera di mata kuliah Fisika Dasar" << endl;
	cout << "Masukkan nama anda: "; //menampilkan ke layar
	cin.getline(nama,25); 
	cout << endl;
	cout << "Hallo " << nama << endl;
	cout << endl;
	
	do{ //perulangan do
		cout << "Pilih salah satu bahasan yang diinginkan " << endl;
		cout << "1. Menghitung Massa Jenis" << endl;
		cout << "2. Besar gaya" << endl;
		cout << "3. Kecepatan benda" << endl;
	 	cout << "4. Menghitung Frekuensi Getaran" << endl;
	 	cout << "Pilihan anda: " << endl;
	 	cin >> pilih;//menerima inputan
	 
		if(pilih == 1){
			cout << "1. Menghitung Massa Jenis\n";
			cout << "a. Masukkan nilai massa(kg): ";//menampilkan ke layar
			cin >> m;//menerima inputan
			cout << "b. Masukkan nilai volume(m3): ";//menampilkan ke layar
			cin >> v;//menerima inputan
			mjenis = m/v;//operator perhitungan
			cout << "c. Nilai Massa Jenis adalah: " << mjenis << endl;
		}
		else if(pilih == 2){
			cout << "2. Menghitung Besar Gaya\n";
			cout << "a. Masukkan nilai massa(kg): ";//menampilkan ke layar
			cin >> m;//menerima inputan
			cout << "b. Masukkan nilai percepatan gravitasi bumi(m3):";//menampilkan ke layar
			cin >> a;//menerima inputan
			gaya = m*a;//operator perhitungan
			cout << "c. Nilai Gaya adalah " << gaya << endl;
		}
		else if(pilih == 3){
			cout << "3. Menghitung Kecepatan\n";
			cout << "a. Masukkan nilai jarak(m): ";//menampilkan ke layar
			cin >> s;//menerima inputan
			cout << "b. Masukkan nilai waktu(s): ";//menampilkan ke layar
			cin >> t;//menerima inputan
			kec = s/t;//operator perhitungan
			cout << "c. Nilai Kecepatan adalah: " << kec << endl;
		}
		else if(pilih == 4){
			cout << "4. Menghitung Frekuensi Getaran\n";
			cout << "a. Masukkan nilai Periode Getaran: ";//menampilkan ke layar
			cin >> T;//menerima inputan
			frekuensi = 1/T;//operator perhitungan
			cout << "b. Nilai Frekuensi Getaran adalah: " << frekuensi << endl;
		}
 		else{
 			cout << "Pilihan anda tidak ada dalam daftar";	
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
