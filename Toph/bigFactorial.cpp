#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i, n, fac=1;
    cin>>n;
    for(i = 1; i<=n; i++){
        fac *= i;
        fac %= 10000;
    }
    if(fac==0) {
        cout<<"0000";
    }
    else {
        cout<<fac;
    }
}