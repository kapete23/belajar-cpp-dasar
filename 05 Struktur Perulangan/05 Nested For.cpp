#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    int a,b;
    for (a = 1; a <= 5; a++)
    {
        for (b = a; b <= 5; b++)
            cout << a << "  ";
        cout << "\n";
    }

    getch();
    bersihkan_layar;
    return 0;
}
