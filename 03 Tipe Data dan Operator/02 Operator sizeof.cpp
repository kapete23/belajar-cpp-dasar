#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "Ukuran tipe data dalam bentuk satuan byte" << endl;
    cout <<"Size of char = "<< sizeof(char) << " byte \n";
    cout <<"Size of int = "<< sizeof(int) << " byte \n";

    char nama[] = {'K','e','v','i','n','\0'};
    cout << "\nnama[] : {";
    //  Cetak isi variable char array "nama"
    //  using traditional for loop
    for (int i = 0; i < 6; ++i) {
        if (i<5) cout << nama[i] << ",  ";
        else {
            cout << nama[i] << "}";
            break;
        }
    }
    cout << "\nsizeof(nama) : " << sizeof(nama) << " byte";
    cout << "\nsizeof(nama[0]) : " << sizeof(nama[0]) << " byte";
    cout << "\nsizeof(nama)/sizeof(nama[0]) : " << sizeof(nama)/sizeof(nama[0]) << " buah karakter dalam char array variabel \"nama\"" << "\n";

    int angka[] = {1,3,5,6,8};
    cout << "\nangka[] : {";
    //  Cetak isi variable integer array "angka"
    //  using range based for loop
    for (const int &k : angka) {
        if (k==angka[4]) {
            cout << k << "}";
            break;
        }
        cout << k << ",  ";
    }
    cout << "\nsizeof(angka) : " << sizeof(angka) << " byte";
    cout << "\nsizeof(angka[0]) : " << sizeof(angka[0]) << " byte";
    cout << "\nsizeof(angka)/sizeof(angka[0]) : " << sizeof(angka)/sizeof(angka[0]) << " buah angka dalam integer array variabel \"angka\"" << "\n";
}
