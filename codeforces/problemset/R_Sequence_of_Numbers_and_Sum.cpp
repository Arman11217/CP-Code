#include <iostream>
#include <algorithm>  
using namespace std;

int main() {
    int N, M;
    while (true) {
        cin >> N >> M;
        if (N <= 0 || M <= 0) break;  

        int start = min(N, M);
        int end = max(N, M);

        int sum = 0;
        for (int i = start; i <= end; i++) {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}
