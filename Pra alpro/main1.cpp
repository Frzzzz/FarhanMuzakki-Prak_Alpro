#include <iostream>
#include "perhitungan.h" //pemanggilan library yang sudah dibuat
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int me,pe,ke;
	cout<<"PROGRAM KALKULATOR"<<endl;
	cout<<"Menu Operasi :"<<endl;
	cout<<"	1. Penambahan"<<endl;
	cout<<"	2. Pengurangan"<<endl;
	cout<<"	3. Perkalian"<<endl;
	cout<<"	4. Pembagian"<<endl;
	cout<<"Pilih Menu No : ";cin>>me;
	cout<<"Bilangan Pertama : ";cin>>pe;
	cout<<"Bilangan Kedua : ";cin>>ke;
	
	switch(me){		//menggunakan perulangan karena terdapat 4 pilihan menu
		case 1 :
			cout<<"Hasil "<<pe<<" + "<<ke<<" = "<<penambahan(pe,ke);	//pemanggilan fungsi
			break;
		case 2 :
			cout<<"Hasil "<<pe<<" - "<<ke<<" = "<<pengurangan(pe,ke);	//pemanggilan fungsi
			break;
		case 3 :
			cout<<"Hasil "<<pe<<" * "<<ke<<" = "<<perkalian(pe,ke);		//pemanggilan fungsi
			break;
		case 4 :
			cout<<"Hasil "<<pe<<" / "<<ke<<" = "<<pembagian(pe,ke);		//pemanggilan fungsi
			break;
		default:
			cout<<"Menu salah";
			break;
	}
	return 0;
}
