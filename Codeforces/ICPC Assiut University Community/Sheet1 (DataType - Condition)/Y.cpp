#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,prod,last_2_digit = 0, rim;
    cin>>a>>b>>c>>d;   
    prod = (a%100)*(b%100)*(c%100)*(d%100);
    last_2_digit = prod%100;
    if(last_2_digit < 10) cout<<"0"<<last_2_digit<<endl;
    else cout<<last_2_digit<<endl;
}