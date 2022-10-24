
#include<iostream>
#include<math.h>

using namespace std;

int main(){

    // rumus sisi miring segitiga: alas^2 + tinggi^2 = miring^2

    int alas = 8, tinggi = 10;
    int sisimiring;

    sisimiring = sqrt ( pow (alas,2) + pow (tinggi,2));

    cout << "Nilai Sisi Miring = " << sisimiring << endl;

    return 0;
}