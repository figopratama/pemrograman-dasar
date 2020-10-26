//Praktikum 3 - Soal nomor 5
//Program Menjumlah Deret Bilangan

#include <iostream>
#include <math.h>

using namespace std;

int main()

{
	int jumlah, awal, akhir;
	float i;
	cout << "PROGRAM PENJUMAHAN DERET BILANGAN\n";
	cout << "Deret 3,7,11,15,...\n";
	cout<< endl;
	cout << "Masukkan Bilangan Awal = ";
	cin >> awal;
	cout << "Masukkan Bilangan Awal = ";
	cin >> akhir;
	cout << endl;
	cout << "Deret Bilangan Kamu:"; 
	cout << endl;
	for(int i = awal; i<=akhir; i+=4){
		cout << i << endl;
		jumlah+=i;
	}
	cout << endl;
	cout << "\n";
	cout << "HASIL PENJUMLAHAN DERET BILANGAN = "<<jumlah;
	cout << endl;
	cout << endl;
	
	return 0;
}
