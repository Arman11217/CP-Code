#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S);

    size_t pos = S.find('\\');

    cout << S.substr(0, pos) << endl;

    return 0;
}
