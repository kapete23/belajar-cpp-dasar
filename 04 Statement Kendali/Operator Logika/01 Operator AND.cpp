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

    //Statement kendali IF ELSE yang menggunakan operator logika (operator binary) "&&"
    //Operator && dibaca AND (dan)
    if (pekerja == 'Y' && barululus == 'Y') {
        cout << "\nKwalitas anda khusus ";
        cout << "kami tertarik...\n";
    }
    else {
        cout << "\nanda harus bekerja dan mempunyai\n";
        cout << "lulusan dari sekolah SMK dalam\n";
        cout << "waktu paling lama 3 tahun.\n";
    }

    getch();
    bersihkan_layar;
    return 0;
}
