#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string a[6];
        cin>>a[6];
        long long s1=0,s2=0;
        s1 = a[0]+a[1]+a[2];
        s2 = a[3]+a[4]+a[5];
        if(s1==s2) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}