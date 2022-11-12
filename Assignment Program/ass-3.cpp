#include <iostream>

using namespace std;

int main() {
    int panjang;
    int lebar;
    int tinggi;
    int volume;
    
    cout << "\nmasukkan panjang : ";
    cin >> panjang;
    
    cout << "\nmasukkan lebar : ";
    cin >> lebar;
    
    cout << "\nmasukkan tinggi : ";
    cin >> tinggi;
    
    volume = panjang * lebar * tinggi;
    
    cout << "\nVolume balok = : " << volume;
    cout << "\n--------------------------------";
    
    return 0;
}