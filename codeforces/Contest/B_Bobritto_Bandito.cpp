#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

       

       
        int l_prime = 0;
        int r_prime = 0;

        for(int i=1;i<=m;i++){
            if(i%2!=0){
        l_prime-- ;

            }
            else{
                r_prime++;
            }
        }

        cout << l_prime << " " << r_prime << endl;
    }

    return 0;
}
