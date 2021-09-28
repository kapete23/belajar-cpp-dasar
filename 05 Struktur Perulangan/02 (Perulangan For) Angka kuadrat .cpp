#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    int num;
    cout << "Angka      Angka kuadrat \n";
    cout << "-------------------------\n";
    for (num = 1; num <= 10; num++)
        cout << num << "\t\t" << (num * num) << endl;

    getch ();
    bersihkan_layar;
    return 0;
}
