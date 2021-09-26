#include <conio.h>
#include <iostream>
#define clrscr system ("cls")

using namespace std;

int main(int argc, char const *argv[])
{
    clrscr ; //Bersihkan Layar
    int bilangan;
    cout << "Masukan bilangan bulat atau integer dan" << "\n";
    cout << "saya akan memilahnya dengan IF\n";
    cout << "adalah ganjil atau genap. \n";
    cout << "\nSilakan input bilangan : ";
    cin >> bilangan;
    if (bilangan % 2 == 0)
    cout << bilangan << " adalah bilangan genap.\n";
    else
    cout << bilangan << " adalah bilangan ganjil.\n";
    getch();
    clrscr ; //Bersihkan Layar
    return 0;
}
