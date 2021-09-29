#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    char huruf;
    int loop;
    //Program pencacah turun dari 10 - 1
    cout << "Pencacah turun dari 10 sampai 1 adalah \n";
    for (loop = 10; loop >= 1; loop--) 
        cout << loop << "   ";
    cout << "\n\nTekan enter untuk melanjut....\n\n";
    getch();

    cout << "Pencacah naik huruf abjad A sampai Z dengan satu langka adalah \n";
    for (huruf = 'A'; huruf <= 'Z'; huruf++)
        cout << "Huruf abjad = " << huruf << "\n";
    cout << "\n\nTekan enter untuk melanjut....\n\n";
    getch();

    cout << "Pencacah naik huruf abjad A sampai Z dengan 13 langka adalah \n";
    for (huruf = 'A'; huruf <= 'Z'; huruf+=13)
        cout << "Huruf abjad = " << huruf << "\n";
    cout << "\n\nTekan enter untuk melanjut....\n\n";
    getch();

    cout << "Pencacah turun huruf abjad z sampai a dengan satu langka adalah \n";
    for (huruf = 'z'; huruf >= 'a'; huruf--)
        cout << "Huruf abjad = " << huruf << "\n";
    cout << "\n\nTekan enter untuk melanjut....\n\n";
    getch();

    bersihkan_layar;
    return 0;
}
