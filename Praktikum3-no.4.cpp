//Praktikum 3 - Soal nomor 4
//Program Menjumlah 6 Suku Pertama Pangkat Tiga

#include <iostream>
#include <math.h>

using namespace std;

int main()

{	
	int jumlah=0;
	float i, pangkat;
	cout<< endl;
	for(int i = 1; i<=6; i++)
	{
		pangkat = pow(i,3);
		cout<<"Suku ke-"<< i;
		cout<< "\n  Pangkat 3 = "<< pangkat<< endl;
		jumlah+=pangkat, pangkat++;

	} 

	cout<< "\n JUMLAH HASIL PANGKAT = "<< jumlah<< endl;
	cout<< endl;
	cout<< endl;
	
	return 0;
}
