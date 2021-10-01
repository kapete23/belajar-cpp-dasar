#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    int jumlah = 0, bilangan;

    //Program menghitung sebuah deret...
    //deret ganjil
    for(bilangan = 1; bilangan <= 20;bilangan++) {
        if (bilangan%2==0) continue;
        jumlah += bilangan;
    }
    cout << "Deret Bilangan : 1 + 3 + 5 + ... + " << bilangan << endl;
    cout << "Jumlah Deret Bilangan = " <<jumlah;

    cout << "\n\n";

    //deret genap
    jumlah= 0;
    bilangan = 0;
    while (bilangan < 20) {
        bilangan++;
        if (bilangan%2 != 0) continue;
        jumlah += bilangan;
    }
    cout << "Deret Bilangan : 2 + 4 + 6 + ... + " << bilangan << endl;
    cout << "Jumlah Deret Bilangan = " <<jumlah;

    cout << "\n\n";

    bilangan = 0;
    jumlah = 0;
    while(true) {
        bilangan++;
        jumlah += bilangan;
        //Fungsi keyword "break" untuk menghentikan suatu looping atau perulangan
        if (bilangan == 20) break;
    }
    cout << "Deret Bilangan : 1 + 2 + ... + " << bilangan << endl;
    cout << "Jumlah Deret Bilangan = " <<jumlah;

    cout << "\n\n";

    jumlah= 0;
    bilangan = 0;
    do {
        bilangan++;
        if (bilangan == 2) continue;
        jumlah += bilangan;
    }
    while (bilangan < 20);
    cout << "Hilangkan bilangan 2" << endl;
    cout << "Deret Bilangan : 1 + 2 + 3 + ... + " << bilangan << endl;
    cout << "Jumlah Deret Bilangan = " <<jumlah;

    cout << "\n\nTekan enter untuk keluar....";

    getch();
    bersihkan_layar;
    return 0;
}
