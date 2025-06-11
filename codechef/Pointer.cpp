#include<bits/stdc++.h>
using namespace std;

int sum(int* a, int* b){

    return (*a + *b);
}

int dif(int* a, int* b){

    return abs(*a - *b);
}
int main(){

    int a,b;
    cin>>a>>b;

    cout<<sum(&a,&b)<<endl;
    cout<<dif(&a,&b)<<endl;

}