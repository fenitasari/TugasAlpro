#include <iostream>
#include <string>
using namespace std;

int main() {
    // Array untuk menyimpan nama-nama hari
    string days[] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};

    string inputDay;
    cout << "Masukkan nama hari: ";
    cin >> inputDay; // Menggunakan cin untuk mendapatkan input pengguna

    // Mencari indeks hari yang dimasukkan pengguna
    int index = -1;
    for (int i = 0; i < 7; ++i) {
        if (days[i] == inputDay) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        // Menghitung indeks hari selanjutnya, dengan menghindari overflow
        int nextIndex = (index + 1) % 7;
        // Menampilkan hari selanjutnya
        cout << "Hari selanjutnya dari " << inputDay << " adalah " << days[nextIndex] << endl;
    } else {
        cout << "Masukkan hari yang valid" << endl;
    }

    return 0;
}