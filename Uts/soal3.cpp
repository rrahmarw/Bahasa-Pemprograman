#include <iostream>
using namespace std;

int main() {
    int n, i, j, s;

    cout << "Masukkan Jumlah Baris : ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        // Menyisipkan spasi
        for (s = i; s < n; s++) {
            cout << " ";
        }
        // Menyisipkan bintang
        for (j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}