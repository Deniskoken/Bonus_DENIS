#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    for (int i = 1; i * i <= x; ++i) {
        if (x % i == 0) {
            cout << i << " ";
            if (i != x / i) {
                cout << x / i << " ";
            }
        }
    }
}
