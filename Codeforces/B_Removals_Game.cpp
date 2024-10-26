#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {   
        int n;
        cin >> n;
        bool f = true, r = true;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i<n; i++) cin>>a[i];
        for(int i = 0; i<n; i++) cin>>b[i];
        if(a!=b) f = false;
        reverse(b.begin(),b.end());
        if(a!=b) r = false;
        if(f || r) cout<<"Bob\n";
        else cout<<"Alice\n"; 

    }   
 return 0;
}