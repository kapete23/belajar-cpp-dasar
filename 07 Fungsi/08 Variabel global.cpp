#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

int num = 2;       // variabel Global
void fungsiCoba(); // Fungsi prototipe

int main(int argc, char const *argv[])
{
    bersihkan_layar;

    cout << "dalam program utama, variabel integer num adalah " << num << endl;
    fungsiCoba();
    cout << "kembali dalam program utama, num adalah " << num << endl;

    cout << "\nTerlihat variabel integer num dapat terlihat dan diubah di semua fungsi." << endl;
    cout << "Oleh sebab itu, variabel integer num dikategorikan sebagai variabel global " << endl;

    getch();
    bersihkan_layar;
    return 0;
}

//Deklarasi isi fungsi void, nama fungsi harus sesuai dengan prototipe fungsi
void fungsiCoba() {
    cout << "dalam fungsiCoba, variabel integer num adalah " << num << endl;
    num = 50;
    cout << "tetapi, sekarang telah diubah dalam fungsiCoba menjadi " << num << endl;
}