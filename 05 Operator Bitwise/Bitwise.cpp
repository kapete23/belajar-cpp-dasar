#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <cstring>

char Hasil_Biner[65];
using namespace std;

main ()
{
    int a,b,d;
    string c,bw;
    cout << "\n Program Bitwise, silaakan pilih pergeseran bit :" ;
    cout << "\n a << b (bit a digeser kekiri sebanyak b)" ;
    cout << "\n a >> b (bit a digeser kekanan sebanyak b)" ;
    cout << "\n Pilih (kiri or kanan) : ";
    cin >> c ;
    cout << "\n Silakan input a dan b :" ;
    cout << "\n a = " ;
    cin >> a ;
    cout << "\n b = " ;
    cin >> b ;
    if (c == "kiri") {
            d = a << b ;
            bw = " << " ;
    }
    else if (c == "kanan") {
            d = a >> b ;
            bw = " >> " ;
    }
    cout << "\n Maka hasil dari " << a << bw << b << " = " << d ;
    getch();
}
