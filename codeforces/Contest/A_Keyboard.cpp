#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
 
int  main() {

    char ch;
    cin>>ch;
    string str;
    cin>> str;

    string keyboard ="qwertyuiopasdfghjkl;zxcvbnm,./";

    string result;

    if(ch=='R'){
        for(ll i=0;i<str.length();i++){
            ll n=keyboard.find(str[i]);
            result+=keyboard[n-1];
        }
    }
    else{
        for(ll i=0;i<str.length();i++){
            ll n=keyboard.find(str[i]);
            result+=keyboard[n+1];
        }
    }
    cout<<result<<endl;
 		  	 	  	 	  	
}	