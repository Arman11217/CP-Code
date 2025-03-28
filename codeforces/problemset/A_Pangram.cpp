#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin >> str;

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    set<string> s;

    for (int i = 0; i < str.size(); i++)
    {
        s.insert(string(1, str[i]));
    }

    if(s.size()==26){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}