#include <iostream>
#include <cmath>

using namespace std;

int main(){
	//memdeklarasikan variabel-variabel
	double varians, rata2, simpangan_baku, jumlah_data, x;
	char ulang;
	int i, jml;
	
		
	do{
	//inisialisasi variabel
	i=0;
	jumlah_data=0; 
	x=0;
	jml=0;
	
	
	cout<<"===============================================\n"
		<<"          PROGRAM PENCARIAN RATA-RATA,\n"
		<<"              SIMPANGAN BAKU, DAN\n" 
		<<"                 VARIANS DATA\n" 
		<<"===============================================\n"
		<<"Jumlah Data : ";
	cin >> jml;
	cout<<"\n";
	
	//membuat array untuk menyimpan data
	double data[jml];
		
	while(i<jml){
		cout<<"Input data ke-"<<i+1<<" : ";
		cin>>data[i];
		
		//menghitung jumlah semua data
		jumlah_data += data[i];
		i++;
		
	}
	
	//menghitung rata-rata data
	rata2 = jumlah_data/jml;
	
	//mengembalikan nilai i ke 0 untuk looping
	i=0;
	
	while(i<jml){
		//mencari pembilang dari persamaan varians
		x += (data[i]-rata2)*(data[i]-rata2);

		i++;
	}
	
	//menghitung varians
	varians = x/jml;	
	//menghitung simpangan baku
	simpangan_baku = sqrt(varians);
	
	//membuat output hasil perhitungan
	cout<<"\n\nRata-rata      : "<<rata2
		<<"\nVarians        : "<<varians
		<<"\nSimpangan Baku : "<<simpangan_baku;
		
	cout<<"\n\nApakah Anda ingin mengulang program?\n"
		<<"Press 'y' for yes and other for exit the program\n";
	cin>>ulang;
	
	//menghapus tampilan program sebelumnya
	system("cls");
	
	}while(ulang=='y'||ulang=='Y');
	
	return 0; 
}
