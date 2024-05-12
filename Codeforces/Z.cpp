#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, d, p1, p2;
    cin>>a>>b>>c>>d;   
    p1 = b*log(a);
    p2 = d*log(c);
    if(p1>p2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}