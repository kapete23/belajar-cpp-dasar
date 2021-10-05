#include <conio.h>
#include <iostream>
#include <iomanip>
#define bersihkan_layar system("cls")

using namespace std;

//Fungsi Prototipe 
void displayMenu();
int getChoice();
void computeFees(string, double, int);

const double ADULT_RATE = 40.00,
SENIOR_RATE = 30.00,
CHILD_RATE = 20.00;

int main(int argc, char const *argv[])
{
    bersihkan_layar;
    int choice,months;
    cout << fixed << showpoint << setprecision(2);
    do {
        displayMenu();
        choice = getChoice();
        if (choice != 4) {
            cout << "berapa jumlah banyaknya bulan:? ";
            cin >> months;
            switch (choice) {
                case 1: computeFees("Dewasa", ADULT_RATE, months);
                break;
                case 2: computeFees("Anak", CHILD_RATE, months);
                break;
                case 3: computeFees("Senior", SENIOR_RATE, months);
            }
        }
    } while (choice != 4);

    bersihkan_layar;
    return 0;
}

//Deklarasi isi fungsi void, nama fungsi harus sesuai dengan prototipe fungsi
void displayMenu() {
    cout << "\nmenu keanggotaan klub kesehatan \n\n";
    cout << "1. Keanggotaan dewasa \n";
    cout << "2. Keangotaan anak\n";
    cout << "3. senior\n";
    cout << "4. Keluar\n\n";
}

int getChoice() {
    int choice;
    cin >> choice;
    while (choice < 1 || choice > 4) {
        cout << "pilihan hanya no 1 – 4 tekan enter. ";
        cin >> choice;
    }
    return choice;
}

void computeFees(string memberType, double rate, int months) {
    cout << endl
    << "tipe keanggotaan: " << memberType << " "
    << "bayaran perbulan Rp" << rate << endl
    << "Jumlah bulan:" << months << endl
    << "Total:Rp."<< (rate * months)
    << endl << endl;
}