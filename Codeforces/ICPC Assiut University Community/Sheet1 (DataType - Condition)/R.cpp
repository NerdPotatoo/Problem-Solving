#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,y,m,d;
    cin>>n;
    y = n/365;
    m = (n - (y*365) )/30;
    d = (n - (y*365) - (m*30));
    cout<<y<<" "<<"years"<<endl;
    cout<<m<<" "<<"months"<<endl;
    cout<<d<<" "<<"days"<<endl;
}