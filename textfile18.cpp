#include <iostream>
#include "windows.h"
#include <fstream>

int main() {
    using namespace std;
    SetConsoleOutputCP(CP_UTF8);

    fstream f1;
    f1.open("c.txt", ios::in);

    int n, a, temp, max_digits = 0;
    f1 >> n;

    for (int i = 0; i < n; i++) {
        f1 >> a;

        temp = abs(a);
        int digits = 0;
        do {
            temp /= 10;
            digits++;
        } while (temp != 0);

        max_digits = digits > max_digits ? digits : max_digits;
    }

    f1.close();

    cout << "Количество цифр в самом длинном числе: " << max_digits << endl;

    return 0;
}