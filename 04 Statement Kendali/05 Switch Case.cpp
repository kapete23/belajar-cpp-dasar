#include <stdio.h>
#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls") //system ("cls") merupakan perintah bersihkan layar pada console atau terminal

using namespace std;

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    char kode;
    cout<<"Masukkan Kode Barang [A..C] : ";
    cin>>kode;
    
    switch (kode) {
        case 'A':
        case 'a':
            cout << "Alat Olah Raga";
            break;
        case 'B':
        case 'b':
            cout << "Alat Elelktronik";
            break;
        case 'C':
        case 'c':
            cout << "Alat Masak";
            break;
        default:
            cout << "Anda Salah Memasukan kode";
            break;
    }

    getch();
    bersihkan_layar;

    return 0;
}
