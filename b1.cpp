#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    // Проверка на високосный год
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
