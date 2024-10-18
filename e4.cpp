#include <iostream>
#include <sstream>
using namespace std;

int CountWords(string line) {
    int count = 0;
    string word;
    stringstream ss(line);
    
    while (ss >> word) {
        ++count;
    }
    
    return count;
}

int main() {
    string line;
    getline(cin, line);
    
    cout << CountWords(line);
}
