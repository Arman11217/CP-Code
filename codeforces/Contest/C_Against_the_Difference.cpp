#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll long long
#define testCase int t;cin>>t;while(t--)

int main() {
    fast;
    testCase {
        int n; 
        cin >> n;
        vector<vector<int>> pos(n+1);
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            if (x <= n) pos[x].push_back(i);
        }

        vector<tuple<int,int,int>> intervals;

        for (int v = 1; v <= n; v++) {
            auto &vec = pos[v];
            int m = vec.size();

            for (int j = 0; j + v - 1 < m; j += v) {
                int l = vec[j];
                int r = vec[j + v - 1];
                intervals.push_back({l, r, v});
            }
        }

        if (intervals.empty()) {
            cout << 0 << endl;
            continue;
        }

        sort(intervals.begin(), intervals.end(), [](auto &A, auto &B){
            if (get<1>(A) != get<1>(B)) {
                return get<1>(A) < get<1>(B);
            }
            return get<0>(A) < get<0>(B);
        });

        int m = intervals.size();
        vector<ll> dp(m+1, 0);

        for (int i = 1; i <= m; i++) {
            int l = get<0>(intervals[i-1]);
            int r = get<1>(intervals[i-1]);
            int w = get<2>(intervals[i-1]);

            int p = 0;
            for (int j = i-1; j >= 1; j--) {
                if (get<1>(intervals[j-1]) < l) {
                    p = j;
                    break;
                }
            }

            dp[i] = max(dp[i-1], dp[p] + w);
        }

        cout << dp[m] << endl;
    }
    return 0;
}
