#include <iostream>

using namespace std;

//Deklarasikan variabel global dari beberapa tipe data:
string nama = "Kevin"   ; //Tipe data string
bool logika = false     ; //Tipe data boolean
char karakter = 'P'     ; //Tipe data karakter
int angka = 210         ; //Tipe data integer (bilangan bulat)
float k = 3.21          ; //Tipe data pecahan / bilangan real

const int bil = 20              ; //Tipe data konstan integer
const string NIM = "5163131022" ; //Tipe data konstan string

void tampil (){
    //Deklarasi variabel lokal
    string pertanyaan = "\nSiapakah nama mu?"; 
    cout << pertanyaan << endl;
}

int main(int argc, char const *argv[])
{
    int b = 5, c{0};
    int x,y,z,maks;

    // Operator terdiri dari tiga jenis, yaitu:
    // |+| Operator Unary
    //     operator yang hanya memiliki atau melibatkan sebuah operand saja. Yang letak operator unary sebelem atau sesudah operand. contoh: *A, ini digunakan dalam pointer, A++ ini digunakan dalam increament, dan sizeof(A) ini digunakan untuk melihat ukuran dari operand yaitu huruf A dalam bentuk byte. Yang termasuk operator unary adalah *,++ dan sizeof, sedangkan operand adalah huruf A.
    
    cout << "Ukuran tipe data dalam bentuk satuan byte" << endl;
    cout <<"Size of char = "<< sizeof(char) << " byte \n";
    cout <<"Size of short int = "<< sizeof(short int) << " byte \n";
    cout <<"Size of int = "<< sizeof(int) << " byte \n";
    cout <<"Size of long int = "<< sizeof(long int) << " byte \n";
    cout <<"Size of float = "<< sizeof(float) << " byte \n";    //Tipe data pecahan / bilangan real
    cout <<"Size of double = "<< sizeof(double) << " byte \n";  //Tipe data pecahan / bilangan real
    cout <<"Size of long double = "<< sizeof(long double) << " byte \n" << endl;

    // |+| Operator Bianary
    //     Operator binary adalah operator yang melibatkan atau dikenakan pada dua buah operand. Yang termasuk dalam operator bianary adalah operator aritmatika (+, -, *, /, dan %). Contoh : 210 + 5, tambah (+) merupakan operator binary yang memiliki dua operand yaitu 210 dan 5.
    
    //Aritmatika
    c=angka+b;
    cout << "Aritmatika" << endl;
    cout << angka << " + " << b << " = " << c << "\n \n";

    // |+| Operator ternary
    //     Operator ternary adalah operator yang melibatkan tiga buah operand. Yang tergolong operator ini adalah Operator kondisi dengan symbol '?', bentuk ungkapan operator kondisi adalah :

    //     <kondisi> ? <ungkapan_1> : <ungkapan_2>

    //     Maksud dari ungkapan kondisi adalah Jika kondisi bernilai benar, maka nilai ungkapan kondisi berupa nilai ungkapan_1 dan jika kondisi bernilai salah, maka nilai ungkapan kondisi berupa nilai ungkapan_2.

    cout << "Program Mencari Nilai Terbesar dari beberapa" << endl ;
    cout << "bilangan, silakan masukkan :" << endl ;
    cout << "Bilangan Pertama = " ; cin >> x ;
    cout << "Bilangan Kedua   = " ; cin >> y ;
    cout << "Bilangan Ketiga  = " ; cin >> z ;
    maks = (x<y) ? y:x;         //Operator ternary
    maks = (maks<z) ? z:maks;   //Operator ternary
    cout << "\nMaka Bilangan Maksimum = " << maks << "\n" << endl;


    tampil();
    //Terdapat beberapa karakter escape, "\n" merupakan salah satu dari karakter escape
    //Fungsinya untuk sebagai enter pada tulisan (New line)
    cout << "Nama saya adalah " << nama << " \n";
    cout << "NIM : " << NIM << ends;
    return 0;
}
