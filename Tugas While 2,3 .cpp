#include <iostream>
using namespace std;

int main() {
    int bilangan, hasil;

    // Meminta input dari user
    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    // Menginisialisasi hasil dengan bilangan yang diinputkan
    hasil = bilangan;

    // Jika bilangan ganjil, kurangi 1 agar menjadi bilangan genap terdekat
    if (bilangan % 2 != 0) {
        bilangan -= 1;
    }

    // Melakukan pengurangan bilangan dengan bilangan genap
    while (bilangan >= 2) {
        hasil -= bilangan;
        bilangan -= 2;
    }

    // Menampilkan hasil akhir
    cout << "Hasil pengurangan dengan bilangan genap: " << hasil << endl;

    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int bilangan, hasil;

    // Meminta input dari user
    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    // Menginisialisasi hasil dengan bilangan yang diinputkan
    hasil = bilangan;

    // Jika bilangan genap, kurangi 1 agar menjadi bilangan ganjil terdekat
    if (bilangan % 2 == 0) {
        bilangan -= 1;
    }

    // Melakukan pengurangan bilangan dengan bilangan ganjil
    while (bilangan >= 1) {
        hasil -= bilangan;
        bilangan -= 2;
    }

    // Menampilkan hasil akhir
    cout << "Hasil pengurangan dengan bilangan ganjil: " << hasil << endl;

    return 0;
}