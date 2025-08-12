#include<bits/stdc++.h>
using namespace std;

string BinarySearch(vector<int> vec, int target){

    int left=0;
    int right=vec.size()-1;

    while(left<=right){

        int mid=left+(right-left)/2;

        if(vec[mid]==target){
           return "found";
           break;
        }
        else if(vec[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return "not found";
}
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int N,Q;
    cin>>N>>Q;
    vector<int> num(N);
    

    for(int i=0;i<num.size();i++){
        cin>>num[i];
    }
    sort(num.begin(),num.end());
    while (Q--)
    {
        int target;
        cin>>target;

        cout<<BinarySearch(num,target)<<endl;
       
    }
    
   
}