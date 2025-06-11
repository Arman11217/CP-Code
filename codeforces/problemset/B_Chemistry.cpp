#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool canBePalindrome(string& s, int k) {
    int freq[26] = {0};
    for (char c : s) {
        freq[c - 'a']++;
    }

    int odd_count = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            odd_count++;
        }
    }

    int needToRemove = max(0, odd_count - 1);
    int remaining = s.length() - k;

    return (k >= needToRemove) && (remaining >= 0);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        if (canBePalindrome(s, k)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
