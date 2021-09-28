#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

string logic_konversi (int a) {
    if (a) return "TRUE";
    else return "FALSE";
}

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    //Operator Logika ternasuk dalam operator bibary, karena operator tersebut mempunyai dua operand.
    int x, x1, x2, y, y1, y2, z, z1, z2, a, b, c;
    a = 125;
    b = 100;
    c = 25;

    //operator logika yaitu: <, >, <=, >=, ==, !=, &&, || dan !.
    x1 = a < b;
    x2 = a > b;
    y1 = c <= b;
    y2 = c >= b;
    z1 = a != c;
    z2 = a == b;
    x = x1 && x2;
    y = y1 || y2;
    z = !z1;

    cout <<"\nA = "<< a << ", B = " << b << ", C = " << c ;
    cout <<"\nX1 = A < B (A Kecil Dari B)" ;
    cout <<"\n   = "<< a << " < " << b ;
    cout <<"\n   = "<< "Logika " << x1 << " (" << logic_konversi(x1) << ")\n";

    cout <<"\nX2 = A > B (A Lebih Besar B)" ;
    cout <<"\n   = "<< a << " > " << b ;
    cout <<"\n   = "<< "Logika " << x2 << " (" << logic_konversi(x2) << ")\n";

    cout <<"\nY1 = C <= B (C Lebih Kecil Sama Dengan B)" ;
    cout <<"\n   = "<< c << " <= " << b ;
    cout <<"\n   = "<< "Logika " << y1 << " (" << logic_konversi(y1) << ")\n";

    cout <<"\nY2 = C >= B (C Lebih Besar Sama Dengan B)" ;
    cout <<"\n   = "<< c << " >= " << b ;
    cout <<"\n   = "<< "Logika " << y2 << " (" << logic_konversi(y2) << ")\n";

    cout <<"\nZ1 = A != C (A Tidak Sama Dengan C)" ;
    cout <<"\n   = "<< a << " != " << c ;
    cout <<"\n   = "<< "Logika " << z1 << " (" << logic_konversi(z1) << ")\n";

    cout <<"\nZ2 = A == B (A Sama Dengan B)" ;
    cout <<"\n   = "<< a << " == " << b ;
    cout <<"\n   = "<< "Logika " << z2 << " (" << logic_konversi(z2) << ")\n";

    cout <<"\nX = X1 && X2 (X1 AND X2)" ;
    cout <<"\n  = "<< x1 << " && " << x2 ;
    cout <<"\n  = "<< "Logika " << x << " (" << logic_konversi(x) << ")\n";

    cout <<"\nY = Y1 || Y2 (Y1 OR Y2)" ;
    cout <<"\n  = "<< y1 << " || " << y2 ;
    cout <<"\n  = "<< "Logika " << y << " (" << logic_konversi(y) << ")\n";

    cout <<"\nZ = !Z1 (Bukan Z1)" ;
    cout <<"\n  = "<< " !" << z1 ;
    cout <<"\n  = "<< "Logika " << z << " (" << logic_konversi(z) << ")\n";

    getch();
    bersihkan_layar;

    return 0;
}
