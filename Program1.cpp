#include <iostream>
using namespace std;

int main() {
    int banyakNilai, nilai, sum = 0;

    cout << "Masukkan banyak nilai: ";
    cin >> banyakNilai;

    for (int i = 1; i <= banyakNilai; i++) {
        cout << "Masukkan Nilai ke-" << i << ": ";
        cin >> nilai;

        if (nilai % 2 == 0) {
            sum += nilai;
        }
    }

    cout << "Jumlahnya adalah " << sum << endl;

    return 0;
}
