#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    int jumlah = 0;
    int bilangan = 0;

    //Program menghitung sebuah deret...
    for (;;) {
        bilangan++;
        jumlah += bilangan;
        //Fungsi keyword "break" untuk menghentikan suatu looping atau perulangan
        if (jumlah >= 30) break;
    }
    cout << "Deret Bilangan : 1 + 2 + ... + " << bilangan << endl;
    cout << "Jumlah Deret Bilangan = " <<jumlah;

    cout << "\n\n";

    bilangan = 0;
    jumlah = 0;
    while(true) {
        bilangan++;
        jumlah += bilangan;
        //Fungsi keyword "break" untuk menghentikan suatu looping atau perulangan
        if (jumlah >= 20) break;
    }
    cout << "Deret Bilangan : 1 + 2 + ... + " << bilangan << endl;
    cout << "Jumlah Deret Bilangan = " <<jumlah;

    cout << "\n\nTekan enter untuk keluar....";

    getch();
    bersihkan_layar;
    return 0;
}
