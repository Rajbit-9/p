#include <iostream>
using namespace std;

int main() {
    int i, N, jumlah=0;
    i = 1;
    
    cout << "Masukan banyak nilai : " ;
    cin >> N ;
    
    /*perulangan*/
    while (i <= N) {
        cout << i*7 << " + ";
        jumlah = jumlah + (i*7);
        i++;
    }
    
    // Menghapus simbol + pada akhir
    cout << "\b\b= " << jumlah << endl;
    
    // Menghitung dan mencetak rata-rata
    float rata = (float)jumlah / N;
    cout << "Rerata : " << jumlah << " / " << N << " = " << rata << endl;
    
    return 0;
}