#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int hours = 0;
    int burned = 0;

    while (a > 0) {
        hours += a;          
        burned += a;        
        a = burned / b;      
        burned = burned % b;
    }

    cout << hours << endl;
    return 0;
}