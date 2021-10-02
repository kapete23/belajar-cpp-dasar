#include <conio.h>
#include <stdio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

//Fungsi void merupakan fungsi yang tidak mengembalikan nilai (return value).
//Deklarasi isi funsi void
void PalingDalam() {
    cout << "\t\t>> Saya sekarang sedang di dalam fungsi PalingDalam (fungssi kedua >> Fungsi AgakDalam >> fungsi PalingDalam).\n";
}

void AgakDalam() {
    cout << "\t>> sekarang saya sedang di fungsi AgakDalam (fungssi kedua >> Fungsi AgakDalam).\n";
    PalingDalam(); // panggil Fungsi
    cout << "\t>> Sekarang saya Kembali ke fungsi AgakDalam.\n";
}

//Prototipe fungsi
void pertama();
void kedua();

int main(int argc, char const *argv[])
{
    bersihkan_layar;

    cout << "Saya sedang di program Utama.\n";
    pertama(); // pemanggilan fungsi pertama
    cout << "Saya kembali ke Program Utama.\n";
    kedua();   // pemanggilan fungsi kedua
    cout << "Saya kembali ke Program Utama.\n";

    getch();
    bersihkan_layar;
    return 0;
}

//Deklarasi isi funsi void, nama fungsi harus sesuai dengan prototipe fungsi
void pertama() {
    cout << " >> Saya sekarang sedang di Fungsi Pertama.\n";
}

void kedua() {
    cout << " >> Saya sekarang sedang di Fungsi Kedua.\n";
    AgakDalam(); // Panggil Fungsi
    cout << " >> Saya sekarang kembali ke Fungsi Kedua.\n";
}