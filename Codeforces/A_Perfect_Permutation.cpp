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
    int n;
    cin>>n;
    if(n&1) cout<<-1;
    else{
        vector<int> v(n);
        for(int i = 0; i< n; i++)
        {
            v[i] = i+1;

        }
        for(int i =0; i<n-1; i+=2)
        {
            swap(v[i],v[i+1]);
        }
        for(auto x:v)
        {
            cout<<x<<" ";
        }
    }
    return 0;
}