/*Program Menghitung Billing Warnet*/

#include <iostream>
#include <conio.h>
using namespace std;
int main () 
{
	int A,B,C,X,Y,Z,T;
	cout<<"HITUNG BIAYA WARNET KAMU DISINI\n";
	cout<<endl;
	cout<<"Masukkan Total Durasi Kamu Bermain Dibawah Ini\n";
	cout<<"Jam   = ";cin>>A;
	cout<<"Menit = ";cin>>B;
	cout<<"Detik = ";cin>>C;
	X=A*5000;
	Y=B*83;
	Z=C*2;
	T=X+Y+Z;
	cout<<"\nTOTAL BIAYA = Rp."<<T;
	getch ();
}
