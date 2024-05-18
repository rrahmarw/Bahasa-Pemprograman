#include <iostream>
#include <string>
using namespace std;

// Fungsi perkalian
float kali(float a, float b) {
    return a * b;
}

// Fungsi pembagian
float bagi(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        return -1; // Nilai khusus untuk menandakan pembagian oleh nol
    }
}

// Fungsi penjumlahan
float tambah(float a, float b) {
    return a + b;
}

// Fungsi pengurangan
float kurang(float a, float b) {
    return a - b;
}

int main() {
    float angka1, angka2;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    // Output hasil dari masing-masing fungsi
    cout << "Hasil kali: " << kali(angka1, angka2) << endl;
    cout << "Hasil bagi: ";
    if (bagi(angka1, angka2) != -1) {
        cout << bagi(angka1, angka2) << endl;
    } else {
        cout << "Error: Pembagian oleh nol tidak didefinisikan" << endl;
    }
    cout << "Hasil tambah : " << tambah(angka1, angka2) << endl;
    cout << "Hasil kurang: " << kurang(angka1, angka2) << endl;

    return 0;
}
