#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    int baris,kolom;
    //Persegi panjang dengan menggunakan karakter '*' (bintang):
    for (baris = 1; baris <= 5; baris++)
    {
        for (kolom = 0; kolom < 9; kolom++)
            cout << "*\t";
        cout << "\n\n";
    }

    getch();
    bersihkan_layar;
    return 0;
}
