#include <iostream>
#include <conio.h>
#define bersihkan_layar system("cls")

using namespace std;

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    char pekerja, barululus;
    cout << "Jawablah pertanyaan dibawah ini\n";
    cout << "dengan jawaban Y untuk Ya atau ";
    cout << "T untuk Tidak\n";
    cout << "Apakah Anda Bekerja? ";
    cin >> pekerja;
    cout << "telahkan Anda selesai sekolah ";
    cout << "dalam dua tahun ini? ";
    cin >> barululus;

    //Statement kendali IF bersarang (nested)
    if (pekerja == 'Y') {
        if (barululus == 'Y') {
            cout << "\nKwalitas anda khusus ";
            cout << "kami tertarik...\n";
        }
    }

    getch();
    bersihkan_layar;
    return 0;
}
