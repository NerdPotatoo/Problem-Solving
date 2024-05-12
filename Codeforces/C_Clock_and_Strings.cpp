#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> a;
        for(int i = 0; i<4;i++)
        {
            int v;
            cin>>v;
            a.push_back(v);
        }
        int t1 = min(a[0],a[1]);
        int t2 = max(a[0],a[1]);
        if(t1<min(a[2],a[3]) && t2<max(a[2],a[3]) && t2>min(a[2],a[3])){
            cout<<"YES\n";
        }
        else if(t1>min(a[2],a[3]) && t2>max(a[2],a[3]) && t1<max(a[2],a[3])){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}