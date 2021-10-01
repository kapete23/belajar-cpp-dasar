#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    int baris = 0, kolom;
    //Persegi panjang dengan menggunakan karakter '*' (bintang):
    do {
        kolom = 0;
        do {
            cout << "*\t";
            kolom++;
        }
        while (kolom < 9);
        cout << "\n\n";
        baris++;
    }
    while (baris < 5);

    getch();
    bersihkan_layar;
    return 0;
}
