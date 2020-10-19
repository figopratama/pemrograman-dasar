//PROGRAM MENGHITUNG GAJI KARYAWAN PERMINGGU

#include <iostream>
using namespace std;
int main()

{
	char name[30];
	int code,b,x,y,TJ,T,U;
	cout<< endl;
	cout<< "PROGRAM HITUNG GAJI KARYAWAN";
	cout<< endl;
	cout<< endl;
	cout<< endl;
	cout<< "Nama Karyawan: ";
	cin>> name;
	cout<< endl;
	cout<< "Kode Golongan Upah Perusahaan adalah:";
	cout<< "\n  Golongan A = 1";
	cout<< "\n  Golongan B = 2";
	cout<< "\n  Golongan C = 3";
	cout<< "\n  Golongan D = 4";
	cout<< "\n  Masukkan Kode sesuai Golongan Upah Kamu (1/2/3/4) =  ";
	cin>> code;
	cout<< endl;
	switch(code)
	{
		case 1:
			cout<<  "  Upah Mingguan Kamu adalah Rp. 5000" << endl;
			break;
			
		case 2:
			cout<<  "  Upah Mingguan Kamu adalah Rp. 7000" << endl;
			break;
			
		case 3:
			cout<<  "  Upah Mingguan Kamu adalah Rp. 8000" << endl;
			break;
			
		case 4:
			cout<<  "  Upah Mingguan Kamu adalah Rp. 10000" << endl;
			break;
	}
	cout<<endl;
	cout<<endl;
	if (code == 1) 
		{
		cout<< "Total Jam kerja selama satu minggu: ";
		cin>>TJ; "Jam";
		b = TJ - 48;
		y = b*4000;
		x = 48*5000;
		T = x + y;
		cout<<endl;
		cout<<endl;
		cout<< " NAMA KARYAWAN = "<<name;
		cout<< "\n TOTAL UPAH KAMU SATU MINGGU = Rp. "<<T;
		}
		
	if (code == 2) 
		{
		cout<< "Total Jam kerja selama satu minggu: ";
		cin>>TJ; "Jam";
		b = TJ - 48;
		y = b*4000;
		x = 48*7000;
		T = x + y;
		cout<<endl;
		cout<<endl;
		cout<< " NAMA KARYAWAN = "<<name;
		cout<< "\n TOTAL UPAH KAMU SATU MINGGU = Rp. "<<T;
		}
		
	if (code == 3) 
		{
		cout<< "Total Jam kerja selama satu minggu: ";
		cin>>TJ; "Jam";
		b = TJ - 48;
		y = b*4000;
		x = 48*8000;
		T = x + y;
		cout<<endl;
		cout<<endl;
		cout<< " NAMA KARYAWAN = "<<name;
		cout<< "\ nTOTAL UPAH KAMU SATU MINGGU = Rp. "<<T;
		}
		
	if (code == 4) 
		{
		cout<< "Total Jam kerja selama satu minggu: ";
		cin>>TJ; "Jam";
		b = TJ - 48;
		y = b*4000;
		x = 48*10000;
		T = x + y;
		cout<<endl;
		cout<<endl;
		cout<< " NAMA KARYAWAN = "<<name;
		cout<< "\n TOTAL UPAH KAMU SATU MINGGU = Rp. "<<T;
		}
	cout<< endl;
	cout<< endl;
	
	return 0;
}
