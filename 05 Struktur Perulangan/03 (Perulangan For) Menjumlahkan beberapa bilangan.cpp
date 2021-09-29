#include <conio.h>
#include <iostream>
#include <iomanip>
#define bersihkan_layar system("cls")

using namespace std;

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    int d;

    int NUM_DAYS, count;
    double total;

    cout << "Program menghitung junlah beberapa bilangan\n";
    cout << "Silakan input banyak bilangan \n";
    cout << "yang ingin dijumlahkan : ";
    cin >> NUM_DAYS;
    cout << "Jumlah angka nol dibelakang koma : ";
    cin >> d;

    for (count = 1, total = 0.0; count <= NUM_DAYS; count++) {
        double bil;
        cout << "Masukkan bilangan ke -  " << count << " : ";
        cin >> bil;
        total += bil; // Syntax total = total + bil
    }

    cout << fixed << showpoint << setprecision(d); //Tentukan berapa jumlah angka nol dibelakang koma
    cout << "\nTotal bilangan nya adalah " << total << endl;

    getch ();
    bersihkan_layar;
    return 0;
}