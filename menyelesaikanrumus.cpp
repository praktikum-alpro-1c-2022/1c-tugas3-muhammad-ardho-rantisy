#include <iostream>
#include <math.h>

using namespace std;

int main(){

    cout << "Buatlah program untuk menyelesaikan rumus Y = bx^2 + 0,5x - c, dimana nilai b = 25, x=15, c=20!\n\n";

    double b = 25, x = 15, c = 20;
    double Y;

    Y = (b * x * x) + 0.5 * x - c;

    cout << endl << "Nilai Y = " << Y << endl;

    return 0;
}