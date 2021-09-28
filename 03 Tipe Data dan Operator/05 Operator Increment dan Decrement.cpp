#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

int main(int argc, char const *argv[])
{
    //Berikut ini merupakan operator unary, adalah sebagai berikut:
    bersihkan_layar;
    cout << "Operator Increment (Pencacah naik)" << "\n";
    int hitung = 0, loop;
    cout << "hitung = 0" << "\n";
    loop = ++hitung;
    cout << "loop = ++hitung" << "\n";
    cout << "Loop = " << loop << "|  Hitung = " << hitung << "\n";
    loop = hitung++;
    cout << "loop = hitung++" << "\n";
    cout << "Loop = " << loop << "|  Hitung = " << hitung << "\n\n";

    cout << "Operator Decrement (Pencacah turun)" << "\n";
    hitung = 10;
    cout << "hitung = 10" << "\n";
    loop = hitung--;
    cout << "loop = hitung--" << "\n";
    cout << "Loop = " << loop << "|  Hitung = " << hitung << "\n";
    loop = --hitung;
    cout << "loop = --hitung" << "\n";
    cout << "Loop = " << loop << "|  Hitung = " << hitung << "\n";

    getch();
    bersihkan_layar;

    return 0;
}
