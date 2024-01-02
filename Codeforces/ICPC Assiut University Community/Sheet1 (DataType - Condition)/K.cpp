#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,z,mn,mx;
    cin>>x>>y>>z;
    mn = min(x,y);
    mn = min(mn,z);
    mx = max(x,y);
    mx = max(mx,z);
    cout<<mn<<" "<<mx<<endl;
}