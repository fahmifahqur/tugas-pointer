#include <iostream>
#include <conio.h>
/* Fahmi Fahqur Rozi */
/* 20051397060-2020B */
using namespace std;
main()
{
	int nilai;
	
	cout << "Masukkan Nilai = ";
	cin >> nilai;
	
	if (nilai >=90){
		cout << "Kategori Nilai Anda Adalah A";
	}
	else if (nilai >=80){
		cout << "Kategori Nilai Anda Adalah B";
	}
	else if (nilai >=70){
		cout << "Kategori Nilai Anda Adalah C";
	}
	else if (nilai >=60){
		cout << "Kategori Nilai Anda Adalah D";
	}
	else if (nilai >=50){
		cout << "Kategori Nilai Anda Adalah E";
	}
	else if (nilai <=50){
		cout << "Anda Tidak Lulus";
	}
	
	getch;
	return 0;
}
