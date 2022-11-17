
#include<iostream>

using namespace std;

int main(){

    double praktikum = 75, uts = 70, uas = 88;
    double nilaiakhir;

    cout << "Nilai akhir mata kuliah Algoritma dan Pemrogaman " << endl << endl;
    cout << "Nilai Praktikum (20%) = " << praktikum << endl;
    cout << "Nilai Uts (38%) = " << uts << endl;
    cout << "Nilai Uas (50%) = " << uas << endl << endl;
    
    nilaiakhir = (praktikum * 20/100) + (uts * 30/100) + (uas * 50/100);

    cout << "Nilai akhir = " << nilaiakhir << endl;;

    return 0;
}