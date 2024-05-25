#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int tahun_lahir;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int tahun_sekarang = 1900 + ltm->tm_year;

    cout << "Masukkan tahun kelahiran Anda: ";
    cin >> tahun_lahir;

    int usia = tahun_sekarang - tahun_lahir;

    cout << "Usia Anda sekarang adalah " << usia << " tahun." << endl;

    return 0;
}
