#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double alas = 5;
    double tinggi = 9;
    double luas;
    
    cout << "\nSegitiga dengan panjang alas 5 cm dan tinggi 9 cm\n";
    
    luas = alas * tinggi / 2;
    
    cout << "maka luas segitiga ABC adalah " << std::setprecision(2) << luas;
    
    return 0;
}