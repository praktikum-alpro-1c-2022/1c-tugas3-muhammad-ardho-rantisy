#include <iostream>

using namespace std;

int main(){

    double I, V, R;
    double arus, tegangan, hambatan;

    cout << "Tegangan!\n\n";

    // Input angka
    cout << "Masukan Arus (I): ";
    cin >> I;
    cout << "Masukan Tegangan (V): ";
    cin >> V;
    cout << "Masukan Hambatan (R): ";
    cin >> R;
    
    // Rumus-rumus
    arus = V/R;
    tegangan = I*R;
    hambatan = V/I;

    // Hasil perhitungan
    cout << endl << "Hasil Arus: " << arus << endl;
    cout << "Hasil Tegangan: " << tegangan << endl;
    cout << "Hasil Hambatan: " << hambatan << endl;
    
    

    return 0;
}