#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        vector<int> vec;
        long long temp=n;
        int rem;

        while(temp!=0){

            rem=temp%10;
            vec.push_back(rem);
            temp=temp/10;


        }

        //sort(vec.begin(),vec.end());

        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
}