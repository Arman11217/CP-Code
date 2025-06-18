#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int flag=1;

    while(vec.size()/2){

        if(vec.front()!=vec.back()){
            flag=0;
            break;
        }
        vec.erase(vec.begin());
        vec.pop_back();
    }

    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    
    
}