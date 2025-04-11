#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n); 
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        int count = 0; 
        sort(vec.begin(), vec.end()); 
        
        
        for (int i = 0; i < n - 1; i++) {
            if (vec[i + 1] - vec[i] > 1) {
                count = 1; 
                break;
            }
        }

        if (count == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
