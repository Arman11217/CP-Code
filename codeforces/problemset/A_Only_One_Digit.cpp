#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while (t--)
    {
        string str;
    cin>>str;
    vector<int> vec;
    for(int i=0;i<str.size();i++){
        vec.push_back(str[i]-'0');
    }
    sort(vec.begin(),vec.end());
    cout<<vec[0]<<endl;
    }
    
}