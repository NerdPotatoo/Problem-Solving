#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,sum;
    cin>>n;
    if(n<=5 || n>9){
        sum = pow(2,n)/2;
    }
    else {
        sum = pow(2,n);
    }
    
    cout<<sum;
}