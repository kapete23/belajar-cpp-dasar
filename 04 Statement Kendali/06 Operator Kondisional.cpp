#include <conio.h>
#include <iostream>
#include <iomanip>
#define bersihkan_layar system("cls")

using namespace std;

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    const double PAY_RATE = 50.0;
    double hours, charges;

    cout << "Berapa jam anda bekerja? ";
    cin >> hours;

    //Operator kondisional atau operator ternary, operator ? mempunyai tiga operand yaitu "hours < 5", "5" dan "hours".
    hours = hours < 5 ? 5 : hours;
    charges = PAY_RATE * hours;

    cout << fixed << showpoint << setprecision(2); //Berapa angka dibelakang koma untuk bilangan real atau pecahan.
    cout << "\nBesar gaji anda adalah $" << charges << endl;

    getch();
    bersihkan_layar;
    return 0;
}
