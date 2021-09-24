#include <iostream>

using std::cout;
using std::endl;

int main()
{
    char nama[] = {'K','e','v','i','n','\0'};
    cout << nama << "\n";
    cout << "\nsizeof(nama) : " << sizeof(nama);
    cout << "\nsizeof(nama[0]) : " << sizeof(nama[0]);
    cout << "\nsizeof(nama)/sizeof(nama[0]) : " << sizeof(nama)/sizeof(nama[0]) << "\n";

    int angka[] = {,3,5,6,0};
    cout << angka << "\n";
    cout << "\nsizeof(angka) : " << sizeof(angka);
    cout << "\nsizeof(angka[0]) : " << sizeof(angka[0]);
    cout << "\nsizeof(angka)/sizeof(angka[0]) : " << sizeof(angka)/sizeof(angka[0]) << "\n";
}
