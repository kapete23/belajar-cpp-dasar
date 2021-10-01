#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    char huruf;
    int loop;
    loop = 10;
    cout << "Pencacah turun dari 10 sampai 1 adalah \n";
    do {
        cout << loop << "   ";
        loop--;
    }
    while (loop >= 1);
    cout << "\n\nTekan enter untuk melanjut....\n\n";
    getch();

    loop = 1;
    cout << "Pencacah naik dari 1 sampai 10 adalah \n";
    do {
        cout << loop << "   ";
        ++loop;
    }
    while (loop <= 10);
    cout << "\n\nTekan enter untuk melanjut....\n\n";
    getch();

    cout << "Pencacah naik huruf abjad A sampai Z dengan satu langka adalah \n";
    huruf = 'A';
    do {
        cout << "Huruf abjad = " << huruf << "\n";
        huruf++;
    }
    while (huruf <= 'Z');
    cout << "\n\nTekan enter untuk melanjut....\n\n";
    getch();

    cout << "Pencacah naik huruf abjad A sampai Z dengan 13 langka adalah \n";
    huruf = 'A';
    do {
        cout << "Huruf abjad = " << huruf << "\n";
        huruf+=13;
    }
    while (huruf <= 'Z');
    cout << "\n\nTekan enter untuk melanjut....\n\n";
    getch();

    cout << "Pencacah turun huruf abjad z sampai a dengan satu langka adalah \n";
    huruf = 'z';
    do {
        cout << "Huruf abjad = " << huruf << "\n";
        huruf--;
    }
    while (huruf >= 'a');
    cout << "\n\nTekan enter untuk melanjut....\n\n";
    getch();

    bersihkan_layar;
    return 0;
}
