#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

//Prototipe Fungsi
void changeThem(int, double);

int main(int argc, char const *argv[])
{
    bersihkan_layar;

    int whole = 12;
    double real = 3.5;
    cout << "dalam nilai main adaIah " << whole << endl;
    cout << "dan nilai real adalah " << real << endl << endl;
    changeThem(whole, real); // memanggil changeThem dengan 2 arguments
    cout << "sekarang kembali dalam main lagi, nilainya adalah ";
    cout << "semuanya masih " << whole << endl;
    cout << "dan nilai real adalah masih " << real << endl;

    getch();
    bersihkan_layar;
    return 0;
}

//Deklarasi isi funsi void, nama fungsi harus sesuai dengan prototipe fungsi
void changeThem(int i, double d) {
    i = 100;
    d = 27.5;

    cout << "dalam fungsi changeThem nilainya diubah menjadi ";
    cout << i << endl;
    cout << "dan nilainya diubah menjadi " << d << endl << endl;
}