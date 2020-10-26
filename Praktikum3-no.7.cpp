//Praktikum 3 - Soal Nomor 7
//Program Membuat Segitiga Sama Kaki

#include<iostream>
#include<conio.h>

using namespace std; 

int main() 
{ 
	int n; 
	cout<<"Masukkan segitiga angka : "; 
	cin>>n; 
	cout<<"\n"; 
	for (int i=1; i<=n; i++) { 
		for (int j=1; j<=i; j++) { 
		cout<<"*"; 
		} 
	cout<<" \n"; 
	} 
	for (int i=n-1; i>=1;i--) { 
		for (int j=1;j<=i;j++) { 
		cout<<"*";
		} 
	cout<<" \n"; 
	} 
	return 0; 
}
