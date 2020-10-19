//PROGRAM MENGHITUNG SEGITIGA SIKU SIKU

#include <iostream>
#include <math.h>
using namespace std;
int main()

{
	int A,B,C1,code;
	float L,C,Kel;
	cout<< endl;
	cout<< "PROGRAM HITUNG SEGITIGA SIKU-SIKU";
	cout<< endl;
	cout<< endl;
	cout<< endl;	
	cout<< " Masukkan Alas Segitiga   = "; cin>> A;
	cout<< " Masukkan Tinggi Segitiga = "; cin>> B;
	cout<< endl;
	cout<< endl;
	cout<< "KODE PENCARIAN:";
	cout<< "\n Mencari Sisi Miring, (1)";
	cout<< "\n Mencari Luas,        (2)";
	cout<< "\n Mencari Keliling,    (3)";
	cout<< endl;
	cout<< "\n Masukkan Kode Pencarian = ";
	cin>> code;
	cout<< endl;
	cout<< endl;
	switch (code)
	{
		case 1:
		C1 = A*A + B*B;
		C = sqrt(C1);
		cout<< " PANJANG SISI MIRING = "<<C;
		break;
		
		case 2:
		L = float(A*B)/2;
		cout<< " LUAS SEGITIGA = "<<L;
		break;
		
		case 3:
		C1 = A*A + B*B;
		C = sqrt(C1);
		Kel = A + B + C;
		cout<< " KELILING SEGITIGA = "<<Kel;
		break;
	}
	cout<< endl;
	cout<< endl;
	
	return 0;
}
