#include <iostream>
#include "windows.h"
#include <fstream>

int main() {
    using namespace std;
    SetConsoleOutputCP(CP_UTF8);

    int n, k;
    fstream f1;
    f1.open("c.txt", ios::out);

    cout << "Введите N: ";
    cin >> n;
    cout << "Введите K: ";
    cin >> k;

    for (int i = 0; i < n; i++) {
        int t = i;
        int digits_sum = 0;
        do {
            digits_sum += t % 10;
            t /= 10;
        } while (t != 0);

        if (digits_sum == k) {
            f1 << i << endl;
        }
    }

    f1.close();

    cout << "Числа записаны";
    return 0;
}
