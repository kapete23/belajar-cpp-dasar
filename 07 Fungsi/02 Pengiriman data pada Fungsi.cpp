#include <conio.h>
#include <stdio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

//Prototipe Fungsi
void TampilNilai(int);

int main(int argc, char const *argv[])
{
    bersihkan_layar;

    cout << "Saya sedang mengisikan beberapa nilai pada fungsi void TampilNilai.\n\n";
    TampilNilai(5);     // Panggil TampilNilai dengan argument 5
    TampilNilai(10);    // Panggil TampilNilai dengan argument 10
    TampilNilai(2);     // Panggil TampilNilai dengan argument 2
    TampilNilai(16);    // Panggil TampilNilai dengan argument 16
    cout << "\nsekarang saya kembali.\n";

    getch();
    bersihkan_layar;
    return 0;
}

//Deklarasi isi funsi void, nama fungsi harus sesuai dengan prototipe fungsi
void TampilNilai(int num){
    cout << "   >> Nilainya adalah " << num << endl;
}