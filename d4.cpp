#include <iostream>
using namespace std;

bool Compare(string S1, string S2) {
    return S1 == S2;
}

int main() {
    string S1, S2;
    cin >> S1 >> S2;
    
    if (Compare(S1, S2))
        cout << "yes";
    else
        cout << "no";
}
