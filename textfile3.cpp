#include <iostream>
#include "windows.h"
#include <fstream>

int main() {
    using namespace std;
    SetConsoleOutputCP(CP_UTF8);

    long long n;
    int k;

    cout << "Введите число N: ";
    cin >> n;
    cout << "Введите количество K: ";
    cin >> k;

    fstream f1;
    f1.open("c.txt", ios::out);

    long long prev = 0, current = 1, next;
    bool found_first = false;
    int count = 0;

    if (n < 0) {
        f1 << 1 << endl;
        count++;
        found_first = true;
    }

    while (count < k) {
        next = prev + current;

        if (next < prev) {
            cout << "Обнаружено переполнение";
            break;
        }

        if (found_first == false) {
            if (next > n) {
                f1 << next << endl;
                count++;
                found_first = true;
            }
        } else {
            f1 << next << endl;
            count++;
        }

        prev = current;
        current = next;
    }

    f1.close();

    cout << "Числа записаны в файл";

    return 0;
}