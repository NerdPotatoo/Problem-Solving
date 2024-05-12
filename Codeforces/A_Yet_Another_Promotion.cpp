// Error

#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long tc;
    cin>>tc;
    while(tc--){
        long long a,b,n,m ,price;
        cin>>a>>b;
        cin>>n>>m;
        if(n>m){
            price = a*m*(n/(m+1)) + b*(n%(m+1));
            // price = a*m;
            // n = n-(m+1);
            // price += (n*b);
            cout<<price<<endl;
        }
        else if(n<=m){
            price = n*min(a,b);
            cout<< price <<endl;
        }
 
    }
}