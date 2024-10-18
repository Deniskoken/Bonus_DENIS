#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    int day = 1;
    double distance = x;

    while (distance < y) {
        distance *= 1.7;
        day++;
    }

    cout << day; 
}
