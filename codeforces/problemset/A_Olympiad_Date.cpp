#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve()
{
    string tar = "01032025";
    map<int, int> required;
    for (char c : tar)
    {
        int d = c - '0';
        required[d]++;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> vec[i];
        }
        map<int, int> counts;
        bool found = false;
        int result = 0;
        for (int i = 0; i < n; ++i)
        {
            int d = vec[i];
            counts[d]++;
            bool met = true;
            for (const auto &pair : required)
            {
                if (counts[pair.first] < pair.second)
                {
                    met = false;
                    break;
                }
            }
            if (met)
            {
                result = i + 1;
                found = true;
                break;
            }
        }
        cout << (found ? result : 0) << endl;
    }
}

int main()
{
    solve();
    return 0;
}