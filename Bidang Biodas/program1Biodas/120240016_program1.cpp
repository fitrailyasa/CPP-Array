#include <iostream>
using namespace std;
 
int main(){ 
	int n; 
	float tinggi;
	float berat; 
	float bmi;
	float badan; 
	
	cout << "+=====================================+" << endl;
	cout << "|        PROGRAM BIOLOGI DASAR        |" << endl;
	cout << "|        BODY MASS INDEX (BMI)        |" << endl;
	cout << "+=====================================+" << endl;
	cout << endl;
	
	cout << "Masukkan jumlah orang : ";
	cin >> n;
	char orang[n];
	
	for(int i = 0; i < n; i++){ 
		cout << "Masukkan tinggi badan orang ke-" << i+1 << " (cm) : ";
		cin >> tinggi;
		cout << "Masukkan berat badan orang ke-" << i+1 << " (kg) : ";
		cin >> berat;
		
		tinggi = tinggi/100;
		bmi = berat/(tinggi*tinggi);
		
		badan = bmi; 
		
		
		cout << "Jumlah BMI orang ke-" << i+1 << " adalah " << bmi << " dan dikategorikan badan yang ";
		
		if(badan < 18.5){
			cout << "kurus";
		}
		else if(badan < 23){
			cout << "normal";
		}
		else if(badan < 30){
			cout << "diatas normal";
		}
		else if(badan > 30){
			cout << "obesitas";
		}
		else {
			cout << "Error";
		}
		cout << endl;
	}
	
	return 0;
}
