#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
    int a, b, c, maksimum ;
    cout << "Program Mencari Nilai Terbesar dari beberapa" << endl ;
    cout << "bilangan, silakan masukkan :" << endl ;
    cout << "Bilangan Pertama = " ; cin >> a ;
    cout << "Bilangan Kedua   = " ; cin >> b ;
    cout << "Bilangan Ketiga  = " ; cin >> c ;
    maksimum = a ;
    if      (maksimum < b) maksimum = b ;
    else if (maksimum < c) maksimum = c ;
    cout << "Maka Bilangan Maksimum = " << maksimum ;
    getch() ;
    return 0 ;
}
