#include <iostream>
#include <string>
using namespace std;

enum Kategori { KOPI = 1, TEH = 2, DESERT = 3, SNACK = 4, MAKANAN = 5, LAINNYA = 6 };

int main() {
    int pilih[100], jumlah[100], sub_total[100], harga[100];
    string menu[100];
    int total_bayar = 0;
    int i = 0;
    bool selesai = false;

    cout << "*********DAFTAR MENU MAKANAN & MINUMAN ***********" << endl;
    cout << "1. KOPI" << endl;
    cout << "2. TEH" << endl;
    cout << "3. DESERT" << endl;
    cout << "4. SNACK" << endl;
    cout << "5. MAKANAN" << endl;
    cout << "6. LAINNYA" << endl;
    cout << "--------------------------------------------------------------" << endl;

    cout << "Tekan 0 jika selesai melakukan pemesanan" << endl << endl;

    while (!selesai) {
        int kategori_menu;
        cout << "Pilih Kategori Menu (1 untuk KOPI, 2 untuk TEH, 3 untuk DESERT, 4 untuk SNACK, 5 untuk MAKANAN, 6 untuk LAINNYA): ";
        cin >> kategori_menu;

        if (kategori_menu == 0) {
            selesai = true;
            continue;
        } else if (kategori_menu < KOPI || kategori_menu > LAINNYA) {
            cout << "Kategori yang dipilih tidak valid!" << endl;
            continue;
        }

        cout << "Pilih Menu:" << endl;
        if (kategori_menu == KOPI) {
            cout << "1. ice caffe latte   Rp. 12000" << endl;
            cout << "2. es kopi susu      Rp. 15000" << endl;
            cout << "3. espresso         Rp. 18000" << endl;
            cout << "4. ice cappucino    Rp. 17000" << endl;
            cout << "5. hot cafee       Rp. 9000" << endl;
        } else if (kategori_menu == TEH) {
            cout << "1. Tea jeruk (Es/panas)      Rp. 5000" << endl;
            cout << "2. green tea (Es/panas)    Rp. 12000" << endl;
            cout << "3. leci tea (Es/panas)    Rp. 13000" << endl;
        } else if (kategori_menu == DESERT) {
            cout << "1. Choco heaven cake    Rp. 35000" << endl;
            cout << "2. Cake tiramisu    Rp. 42000" << endl;
            cout << "3. Banoffee  Rp. 33000" << endl;
        } else if (kategori_menu == MAKANAN) {
            cout << "1. NASI GORENG      Rp. 15000" << endl;
            cout << "2. INDOMIE    Rp. 9000" << endl;
        } else if (kategori_menu == SNACK) {
            cout << "1. Cumi ring     Rp. 5000" << endl;
            cout << "2. onnion ring  Rp. 12000" << endl;
            cout << "3. kentang goreng    Rp. 13000" << endl;
        } else if (kategori_menu == LAINNYA) {
            cout << "1. AQUA    Rp. 5000" << endl;
        }

        int menu_terpilih;
        cout << "Pilih Menu: ";
        cin >> menu_terpilih;

        if ((kategori_menu == KOPI &&      (menu_terpilih < 1 || menu_terpilih > 5)) ||
            (kategori_menu == TEH &&       (menu_terpilih < 1 || menu_terpilih > 3)) ||
            (kategori_menu == DESERT &&    (menu_terpilih < 1 || menu_terpilih > 3)) ||
            (kategori_menu == MAKANAN &&   (menu_terpilih < 1 || menu_terpilih > 2)) ||
            (kategori_menu == SNACK &&     (menu_terpilih < 1 || menu_terpilih > 3)) ||
            (kategori_menu == LAINNYA && menu_terpilih != 1)) {
            cout << "Menu yang dipilih tidak sesuai" << endl;
            continue;
        }

        switch (menu_terpilih) {
            case 1:
                if (kategori_menu == KOPI) {
                    menu[i] = "ice caffe latte";
                    harga[i] = 12000;
                } else if (kategori_menu == TEH) {
                    menu[i] = "Tea jeruk (Es/panas)";
                    harga[i] = 5000;
                } else if (kategori_menu == DESERT) {
                    menu[i] = "Choco heaven cake";
                    harga[i] = 35000;
                } else if (kategori_menu == MAKANAN) {
                    menu[i] = "NASI GORENG";
                    harga[i] = 15000;
                } else if (kategori_menu == SNACK) {
                    menu[i] = "Cumi ring";
                    harga[i] = 5000;
                } else if (kategori_menu == LAINNYA) {
                    menu[i] = "AQUA";
                    harga[i] = 5000;
                }
                break;
            case 2:
                if (kategori_menu == KOPI) {
                    menu[i] = "es kopi susu";
                    harga[i] = 15000;
                } else if (kategori_menu == TEH) {
                    menu[i] = "green tea (Es/panas)";
                    harga[i] = 12000;
                } else if (kategori_menu == DESERT) {
                    menu[i] = "Cake tiramisu";
                    harga[i] = 42000;
                } else if (kategori_menu == SNACK) {
                    menu[i] = "onnion ring";
                    harga[i] = 12000;
                }
                break;
            case 3:
                if (kategori_menu == KOPI) {
                    menu[i] = "espresso";
                    harga[i] = 18000;
                } else if (kategori_menu == TEH) {
                    menu[i] = "leci tea (Es/panas)";
                    harga[i] = 13000;
                } else if (kategori_menu == DESERT) {
                    menu[i] = "Banoffee";
                    harga[i] = 33000;
                } else if (kategori_menu == SNACK) {
                    menu[i] = "kentang goreng";
                    harga[i] = 13000;
                }
                break;
        }

        cout << "Jumlah Porsi " << menu[i] << ": ";
        cin >> jumlah[i];
        cout << endl;

        sub_total[i] = jumlah[i] * harga[i];

        total_bayar += sub_total[i];
        i++;
    }

    cout << endl;
    cout << "                 INVOICE PEMBELIAN  SUKSES" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "No     Nama Menu             Harga       Jumlah        Sub Total " << endl;
    cout << "----------------------------------------------------------------------" << endl;
    for (int a = 0; a < i; a++) {
        cout << a + 1 << "      " << menu[a] << "    " << harga[a] << "        " << jumlah[a] << "            " << sub_total[a] << endl;
    }

    cout << "----------------------------------------------------------------------" << endl;
    cout << "Total Bayar = Rp." << total_bayar << endl;

    return 0;
}
