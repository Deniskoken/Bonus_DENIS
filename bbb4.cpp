 #include <iostream>

using namespace std;

int main() {
    long long N;
    cin >> N;

    long long sum;
    if (N >= 1) {
        sum = (1 + N) * N / 2;
    } else {
        sum = (1 + N) * (-N) / 2;
        sum = -sum;
    }

    cout << sum;
    return 0;
}
