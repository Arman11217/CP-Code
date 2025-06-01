#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int x = 4; x < n; ++x) {
        int y = n - x;

        bool xComposite = false;
        if (x > 3) {
            for (int i = 2; i * i <= x; ++i) {
                if (x % i == 0) {
                    xComposite = true;
                    break;
                }
            }
        }

        bool yComposite = false;
        if (y > 3) {
            for (int i = 2; i * i <= y; ++i) {
                if (y % i == 0) {
                    yComposite = true;
                    break;
                }
            }
        }

        if (xComposite && yComposite) {
            cout << x << " " << y << endl;
            break;
        }
    }

    return 0;
}
