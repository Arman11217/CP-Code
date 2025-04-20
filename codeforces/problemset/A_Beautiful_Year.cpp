#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;

    while(1){
        n++;
        str=to_string(n);

        set<char> s;
        for(int i=0;i<str.size();i++){
            s.insert(str[i]);

        }

        if(s.size()==4){
            break;
        }
        else{
            n=stoi(str);
        }
    }
    cout<<n<<endl;
}