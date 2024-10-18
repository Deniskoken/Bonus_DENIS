#include <iostream>
using namespace std;

int main() {
    long long x, p, y;
    cin >> x >> p >> y;

    int years = 0;

    while (x < y) {
        x += (x * p) / 100;
        years++;
    }

    cout << years;
    return 0;
}
