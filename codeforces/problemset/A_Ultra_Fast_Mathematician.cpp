#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    string str3(str1.length(), '0');

    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != str2[i]) {
            str3[i] = '1'; 
        }
    }

    cout << str3 << endl;

    return 0;
}
