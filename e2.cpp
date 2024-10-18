#include <iostream>
using namespace std;

int main() {
    int v, t;
    cin >> v >> t;

    int length = 109;
    int position = (v * t) % length;

    if (position < 0) {
        position += length;
    }

    cout << position;
}
