#include <iostream>

using namespace std;

void operasi(int pilihan) {
    int angka1, angka2;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    switch (pilihan) {
        case 1:
            cout << "Hasil penjumlahan: " << angka1 + angka2 << endl;
            break;
        case 2:
            cout << "Hasil pengurangan: " << angka1 - angka2 << endl;
            break;
        case 3:
            cout << "Hasil perkalian: " << angka1 * angka2 << endl;
            break;
        case 4:
            if (angka2 != 0) {
                cout << "Hasil pembagian: " << static_cast<float>(angka1) / angka2 << endl;
            } else {
                cout << "Pembagian oleh nol tidak valid." << endl;
            }
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }
}

int main() {
    cout << "Menu Operasi Matematika" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;

    int pilihan;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;

    operasi(pilihan);

    return 0;3
}