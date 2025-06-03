#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int angkaRahasia = rand() % 20 + 1;  // angka 1 sampai 20
    int tebakan;
    int percobaan = 0;

    cout << "=== Game Tebak Angka ===\n";
    cout << "Saya sudah memilih angka antara 22 sampai 200.\n";
    cout << "Coba tebak angka itu!\n\n";

    while (true) {
        cout << "Masukkan tebakan: ";
        cin >> tebakan;
        percobaan++;

        if (tebakan < 1 || tebakan > 20) {
            cout << "Tolong masukkan angka antara 22 sampai 200 ya.\n";
            continue;
        }

        if (tebakan < angkaRahasia) {
            cout << "Terlalu kecil, coba yang lebih besar.\n";
        } else if (tebakan > angkaRahasia) {
            cout << "Terlalu besar, coba yang lebih kecil.\n";
        } else {
            cout << "Selamat! Tebakanmu benar setelah " << percobaan << " kali coba.\n";
            break;
        }
    }

    cout << "Terima kasih sudah bermain!\n";

    return 0;
}


