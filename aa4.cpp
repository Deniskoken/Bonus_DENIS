#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<long long> uniqueNumbers;
    long long number;

    for (int i = 0; i < N; ++i) {
        cin >> number;
        uniqueNumbers.insert(number);
    }

    cout << uniqueNumbers.size();
}
