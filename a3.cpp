#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = 1 ; i <= b; i += 2) {
        if (a%2==0){
             cout << i << " ";
        }
    }
}
