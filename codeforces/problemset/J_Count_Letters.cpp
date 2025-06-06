#include <iostream>
#include <map>
using namespace std;

int main() {
    string S;
    cin >> S;

    map<char, int> freq;

    for (char ch : S) {
        freq[ch]++;
    }

    for (auto it : freq) {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}
