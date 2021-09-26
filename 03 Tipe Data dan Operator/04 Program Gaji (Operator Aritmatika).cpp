#include <iostream>
#include <conio.h>
#define clrscr system ("cls")

using namespace std ;

int main ()
{
	//Operator Aritmatika seperti penjumlahan (+), pengurangan (-), pembagian (/) dan pengalihan (*) merupakan kategori operator binary, yang dimana memimili dua operand.
	double jam, besar, bayar;
	cout << "Berapa jam kamu bekerja?";
	cin >> jam ;
	cout << "Berapa besar gaji tiap jamnya?";
	cin >> besar ;
	//Yang termasuk operand yaitu besar dan jam.
	bayar = besar*jam ;
	cout << "Kamu mendapat gaji sebesar (Rp)" << bayar << endl ;
	getch () ;
	clrscr ; //Bersihkan Layar
	return 0 ;
}
