#include <bits/stdc++.h>
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

        sort(vec.begin(), vec.end());
        int min_val = vec.front();
        int max_val = vec.back();

        if ((min_val + max_val) % 2 == 0) {
            cout << 0 << endl;
            continue;
        }

        vector<int> temp1 = vec;
        int op1 = 0;
        while (!temp1.empty()) {
            int mn = *min_element(temp1.begin(), temp1.end());
            int mx = *max_element(temp1.begin(), temp1.end());
            if ((mn + mx) % 2 == 0) break;
            temp1.pop_back(); 
            op1++;
        }

        vector<int> temp2 = vec;
        int op2 = 0;
        while (!temp2.empty()) {
            int mn = *min_element(temp2.begin(), temp2.end());
            int mx = *max_element(temp2.begin(), temp2.end());
            if ((mn + mx) % 2 == 0) break;
            temp2.erase(temp2.begin()); 
            op2++;
        }

        cout << min(op1, op2) << endl;
    }

    return 0;
}
