#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

//Prototipe Fungsi
void divide(double, double);

int main(int argc, char const *argv[])
{
    bersihkan_layar;

    double num1, num2;
    cout << "masukan dua angka yang akan dibagi \n";
    cout << "angka yang kedua: ";
    cin >> num1 >> num2;
    divide(num1, num2);

    getch();
    bersihkan_layar;
    return 0;
}

//Deklarasi isi funsi void, nama fungsi harus sesuai dengan prototipe fungsi
void divide(double arg1, double arg2) {
    if (arg2 == 0.0) {
        cout << "maaf, tidak bisa dibagi dengan bilangan nol.\n";
        return; //Pernyataan kembali atau keluar dari fungsi
    }
    cout << "jawabanya adalah: " << (arg1 / arg2) << endl;
}