#include <iostream>
#include <conio.h>
#define bersihkan_layar system("cls")

using namespace std;

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    double income;
    int years;

    cout << "Apakah ini masukan tahunan Anda? ";
    cin >> income;
    cout << "berapa banyak anda bekerja setiap tahunnya "
    << "Pekerjaan anda sekarang? ";
    cin >> years;

    //Statement kendali IF ELSE yang menggunakan operator logika (operator binary) "!"
    //Operator ! dibaca bukan (negasi atau lawan)
    if (!(income >= 35000 || years > 5)) {
        cout << "\nAnda akan mendapatkan gaji paling tidak $35,000 atau lebih\n";
        cout << "setelah bekerja lebih dari lima tahun.\n";
    }
    else 
        cout << "\nKwalifikasi Anda.\n";

    getch();
    bersihkan_layar;
    return 0;
}