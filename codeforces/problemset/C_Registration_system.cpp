#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
 
int  main() {
 	
    unordered_map<string, ll> db;

   testCase {
        string name;
        cin >> name;

        if (db.find(name) == db.end()) {
            cout << "OK\n";
            db[name] = 0;
        } else {
            db[name]++;
            string newName = name + to_string(db[name]);
            cout << newName << "\n";
            db[newName] = 0;
        }
    }

    return 0;	  	 	  	 	  	
}	