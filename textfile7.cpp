// #include <iostream>
// #include "windows.h"
// #include <fstream>
//
// int main() {
//     using namespace std;
//     SetConsoleOutputCP(CP_UTF8);
//
//     int a, i = 1, sum = 0;
//     fstream f1;
//
//     f1.open("c.txt", ios::in);
//
//     while (f1 >> a) {
//         if (i % 2 == 1) {
//             sum += a;
//         }
//
//         i++;
//     }
//
//     f1.close();
//
//     cout << "Сумма всех элементов на нечетных номера: " << sum << endl;
//     return 0;
// }