#include <conio.h>
#include <iostream>
#define bersihkan_layar system("cls")

using namespace std;

// Fungsi void prototipe
void showLocal();
void showStatic();

int main(int argc, char const *argv[])
{
    bersihkan_layar;

    /*  Jika suatu fungsi dipanggil lebih dari satu kali dalam sebuah program, maka nilai yang disimpan dalam
        fungsi sebagai variabel lokal tidak akan kuat menahan panggilan fungsi. Hal ini disebabkan karena 
        variabel-variabel yang hancur ketika fungsi diakhiri dan kemudian kembali dibuat bila fungsi sudah 
        dimulai lagi. Hal ini ditunjukkan dalam fungsi void "showLocal":    */

    cout << "Variable lokal tanpa keyword \"static\" \n" ;
    showLocal();
    showLocal();

    /*  Walaupun pernyataan terakhir dalam fungsi showLocal meng-input 99 pada localNum, variabel yang hancur 
        bila fungsi kembali dipanggil. Pada saat fungsi tersebut dipanggil, localNum akan recreated dan 
        diinisialisasi ke 5 lagi.   */

    cout << "Tekan enter untuk melanjutkan...... \n" ;
    getch();

    /*  Kadang-kadang keinginan untuk sebuah program untuk "mengingat" adalah nilai yang disimpan dalam
        variabel lokal antara fungsi panggilan. Hal ini dapat dicapai dengan membuat variabel statis.
        Variabel Static adalah variable lokal yang tidak hancur bila fungsi kembali. Mereka ada untuk 
        seluruh masa program, walaupun mereka hanya lingkup fungsi mereka yang ditetapkan. 
        Hal ini ditunjukkan dalam fungsi void "showStatic":*/

    cout << "\nVariable lokal dengan keyword \"static\" \n" ;
    for (int count = 0; count < 5; count++)
    showStatic();

    getch();
    bersihkan_layar;
    return 0;
}

//Deklarasi isi fungsi void, nama fungsi harus sesuai dengan prototipe fungsi
void showLocal() {
    int localNum = 5;       //variabel Local
    cout << "localNum adalah " << localNum << endl;
    localNum = 99;
}

void showStatic() {
    static int statNum = 5; // Variabel lokal dengan keyword "static"
    cout << "statNum adalah " << statNum << endl;
    statNum++; // Pernyataan "statNum++" sama dengan "statNum = statNum + 1"
}