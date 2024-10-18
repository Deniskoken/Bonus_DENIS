#include <iostream>
using namespace std;

int main() {
    int k, m, n;
    cin >> k >> m >> n;
    int totalSides = 2 * n; 
    int batches = (totalSides + k - 1) / k;
    int totalTime = batches * m;
    cout << totalTime;
}
