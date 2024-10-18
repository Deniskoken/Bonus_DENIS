#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;
    int num = 2;

    while (num <= N) {
        bool isPrime = true;
        int j = 2;

        while (j * j <= num) {
            if (num % j == 0) {
                isPrime = false;
                break;
            }
            j++;
        }

        if (isPrime) {
            count++;
        }

        num++;
    }

    cout << count;
    return 0;
}
