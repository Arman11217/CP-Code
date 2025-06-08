#include<bits/stdc++.h>
using namespace std;

void problemB(int a) {
    vector<int> vec;

    for (int i = 2; i <= a; i += 2) {
        vec.push_back(i);
    }

    if (a % 2 == 1) {
        vec.push_back(a);
        a -= 1; 
    }

    for (int i = a - 1; i >= 1; i -= 2) {
        vec.push_back(i);
    }

    for (int i=0;i<vec.size();i++) cout << vec[i] << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        problemB(n);
    }
    
}
