#include <iostream>

using namespace std;

//Deklarasikan variabel global dari beberapa tipe data:
string nama = "Kevin"; //Tipe data string
bool logika = false  ; //Tipe data boolean
char karakter = 'P'  ; //Tipe data karakter
int angka = 210      ; //Tipe data integer

void tampil (){
    //Deklarasi variabel lokal
    string pertanyaan = "Siapakah nama mu?"; 
    cout << pertanyaan << endl;
}

int main(int argc, char const *argv[])
{
    tampil();
    cout << "Nama saya adalah " << nama << ends;
    return 0;
}
