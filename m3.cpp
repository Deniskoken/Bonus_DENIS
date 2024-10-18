#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int countZeros = 0;
    int number;

    for (int i = 0; i < N; i++) {
        cin >> number;
        if (number == 0) {
            countZeros++;
        }
    }

    cout << countZeros;
    return 0;
}
