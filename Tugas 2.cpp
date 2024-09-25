#include <iostream>

using namespace std;

int main() {
    int awal, akhir, i, jumlahGenap = 0;

    cout << "Masukkan batas awal: ";
    cin >> awal;
    cout << "Masukkan batas akhir: ";
    cin >> akhir;

    cout << "Bilangan genap antara " << awal << " dan " << akhir << " adalah:\n";

    for (i = awal; i <= akhir; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            jumlahGenap++;
        }
    }

    cout << endl;
    cout << "Banyaknya bilangan genap: " << jumlahGenap << endl;
    cout << "Jumlah semua bilangan genap: " << jumlahGenap * (awal + akhir) / 2 << endl;

    return 0;
}
