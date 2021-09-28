#include <iostream>
#include <conio.h>
#define bersihkan_layar system("cls")

using namespace std ;

main ()
{
    //Berikut ini merupakan operator unary, adalah sebagai berikut:
    bersihkan_layar;
    int hitung, loop;
    cout << "Operator Increment (Pencacah naik) hitung++" << "\n";
    for (hitung = 0; hitung < 5;) {
        loop = hitung++;
        cout << "loop = hitung++" << "\n";
        cout << "Loop = " << loop << "|  Hitung = " << hitung << "\n\n";
    }
    cout << "\n";

    cout << "Operator Increment (Pencacah naik) ++hitung" << "\n";
    for (hitung = 0; hitung < 5; ) {
        loop = ++hitung;
        cout << "loop = ++hitung" << "\n";
        cout << "Loop = " << loop << "|  Hitung = " << hitung << "\n\n";
    }

    cout << "\n\n";

    cout << "Operator Decrement (Pencacah turun) hitung--" << "\n";
    for (hitung = 10; hitung > 5; hitung--) {
        loop = hitung;
        cout << "loop = hitung--" << "\n";
        cout << "Loop = " << loop << "|  Hitung = " << hitung << "\n\n";
    }
    cout << "\n";

    cout << "Operator Decrement (Pencacah turun) --hitung" << "\n";
    for (hitung = 10; hitung > 5; --hitung) {
        loop = hitung;
        cout << "loop = --hitung" << "\n";
        cout << "Loop = " << loop << "|  Hitung = " << hitung << "\n\n";
    }
    
    getch();
    bersihkan_layar;
    return 0;
}
