#include <iostream>

using namespace std;

int main() {
    int angka_pertama, angka_kedua;

    
    cout << "Masukkan angka pertama: ";
    cin >> angka_pertama;

    cout << "Masukkan angka kedua: ";
    cin >> angka_kedua;

    
    int hasil_penjumlahan = angka_pertama + angka_kedua;
    int hasil_pengurangan = angka_pertama - angka_kedua;
    int hasil_perkalian = angka_pertama * angka_kedua;
    float hasil_pembagian = (float)angka_pertama / angka_kedua;


    cout << "penjumlahan : " << hasil_penjumlahan << endl;
    cout << "pengurangan : " << hasil_pengurangan << endl;
    cout << "perkalian : " << hasil_perkalian << endl;
    cout << "pembagian : " << hasil_pembagian << endl;

    return 0;
}
