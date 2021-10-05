#include <conio.h>
#include <iostream>
#include <iomanip>
#define bersihkan_layar system("cls")

using namespace std;

//Fungsi Prototipe 
void anotherFunction();

int main(int argc, char const *argv[])
{
    bersihkan_layar;

    int num = 1;
    cout << "Dalam program utatma,num adalah: " << num << endl;
    anotherFunction();
    cout << "Kembali dalam program utama, num masih" << num << endl;

    bersihkan_layar;
    getch();
    return 0;
}

//Deklarasi isi fungsi void, nama fungsi harus sesuai dengan prototipe fungsi
void anotherFunction() {
    int num = 20; // variabel Local
    cout << "Dalam anotherFunction, num adalah: " << num << endl;
}