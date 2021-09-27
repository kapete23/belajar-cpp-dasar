#define bersihkan_layar system("cls")
#include <conio.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    float pendptan, jasa=0, komisi=0, total=0;
    cout << "Pendapatan Hari ini : Rp. ";

    cin>>pendptan;
    //Statement kendali paduan antara IF, ELSE IF dan ELSE.
    if (pendptan >= 0 && pendptan <= 200000){
        jasa=10000;
        komisi=0.1*pendptan;
    }
    else if(pendptan<=500000) {
        jasa=20000;
        komisi=0.15*pendptan;
    }
    else if(pendptan<=1000000) {
        jasa=50000;
        komisi=0.17*pendptan;
    }
    else {
        jasa=30000;
        komisi=0.2*pendptan;
    }

    /* Menghitung total */
    total = komisi+jasa;
    cout << "Uang Jasa    :   Rp. "<< jasa << endl;
    cout << "Uang Komisi  :   Rp. "<< komisi << endl;
    cout << "=============================+++++++++" << endl;
    cout << "Hasil Total  :   Rp. "<< total << endl;

    getch();
    bersihkan_layar;
    return 0;
}
