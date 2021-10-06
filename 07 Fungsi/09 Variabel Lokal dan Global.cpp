#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

// Funsi prototipe
void texas();
void arkansas();

int cows = 10; //variabel global

int main(int argc, char const *argv[])
{
    bersihkan_layar;

    cout << "Disana banyak " << cows << " cows di program utama. (variabel global integer cows)\n";
    texas();
    arkansas();
    cout << "Kembali dalam program utama, disana banyak " << cows << " cows. (variabel global integer cows)\n";

    getch();
    bersihkan_layar;
    return 0;
}

//Deklarasi isi fungsi void, nama fungsi harus sesuai dengan prototipe fungsi
void texas() {
    int cows = 100; // variabel Local
    cout << "disana " << cows << " cows di texas. (variabel lokal integer cows)\n";
}
void arkansas() {
    int cows = 50;  // variabel Local
    cout << "There are " << cows << " cows in arkansas. (variabel lokal integer cows)\n";
}