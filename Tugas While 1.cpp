#include <iostream>
using namespace std;

int main() {
    int i, N, jumlah = 0;
    i = 1;

    // Memasukkan banyak nilai
    cout << "Masukan banyak nilai : ";
    cin >> N;

    // Perulangan untuk mencetak kelipatan 7
    cout << "Jumlah : ";
    while (i < N) {
        cout << i * 7 << " + ";
        jumlah = jumlah + (i * 7);
        i++;
    }

    // Menambahkan kelipatan 7 terakhir tanpa tanda "+"
    jumlah = jumlah + (i * 7);
    cout << i * 7 << " = " << jumlah << endl;

    // Menghitung rata-rata
    float rata = (float)jumlah / N;
    cout << "Rerata : " << jumlah << " / " << N << " = " << rata << endl;

    return 0;
}