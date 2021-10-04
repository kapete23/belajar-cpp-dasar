#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

//Prototipe Fungsi
int persegi(int);

int main(int argc, char const *argv[])
{
    bersihkan_layar;

    int number, hasil;
    cout << "Masukan angka yang akan dikuadratkan : ";
    cin >> number;
    hasil = persegi (number);
    cout << number << " pangkat 2 Hasilnya adalah " << hasil << endl;

    getch();
    bersihkan_layar;
    return 0;
}

//Deklarasi isi funsi void, nama fungsi harus sesuai dengan prototipe fungsi
int persegi(int number) {
    return number * number;
}