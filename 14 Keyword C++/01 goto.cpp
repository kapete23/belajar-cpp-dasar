#include <conio.h>
#include <stdio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    int a, b;
    char lagi;
    string odd_even;

    atas: //nama label

    cout << "Program menentuntakan ganjil atau genap suatu bilangan \n";
    cout << "Masukkan Bilangan = ";
    cin >> a;
    b = a % 2;
    if (b==0) odd_even = "genap";
    else odd_even = "ganjil";
    cout << "\nMaka sisa pembagian dari " << a << " : (dibagi) 2 adalah = " << b;
    cout << "\nArtinya bilangan " << a << " merupakan bilangan " << odd_even;
    cout << "\n\nIngin Hitung Lagi [Y/T] : ";
    lagi = getche() ;
    if (lagi == 'Y' || lagi == 'y') {
        bersihkan_layar;
        goto atas; //fungsi keyword "goto" untuk mengarahkan eksekusi program menuju ke pernyataan yang diawali suatu label. Label merupakan suatu pengenal (identifier) yang diikuti dengan tanda titik dua ( : ).
    }

    getch();
    bersihkan_layar;
    return 0;
}
