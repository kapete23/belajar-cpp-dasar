#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    int baris = 0, kolom;
    //Persegi panjang dengan menggunakan karakter '*' (bintang):
    while (baris < 5){
        kolom = 0;
        while (kolom < 9){
            cout << "*\t";
            kolom++;
        }
        cout << "\n\n";
        baris++;
    }

    getch();
    bersihkan_layar;
    return 0;
}
