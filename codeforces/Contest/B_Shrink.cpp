#include <iostream>
#include <vector>

using namespace std;

vector<int> constructPermutation(int n) {
    vector<int> perm(n);
    int left = 0, right = n - 1;
    int current = n;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            perm[left++] = current--;
        } else {
            perm[right--] = current--;
        }
    }
    return perm;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p = constructPermutation(n);
        for (int num : p) {
            cout << num << ' ';
        }
        cout << '\n';
    }
    return 0;
}