#include<bits/stdc++.h>
using namespace std;
#define lli long long int
vector<lli> v[61];

int lowerBound(lli k, lli l){
    int lw = 0,ans = v[k].size(); 
    int hi = v[k].size()-1;
    while(lw<=hi)
    {
        int mid = lw + (hi-lw)/2;

        if(v[k][mid]>=l){
            ans = mid;
            hi = mid-1;
        }
        else{
            lw = mid+1;
        }
    }
    return ans;
}

int countSetBit(lli n){
    int res = 0;
    while(n>0){
        res += n%2;
        n/=2;
    }
    return res;
}
void solve()
{
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        lli n,q;
        cin>>n>>q;
        vector<lli> num(n);
        //Clear previous data
        for(int i=0; i<=60; i++)
            v[i].clear();
 
        for(int i = 0; i<n; i++)
        {
            cin>>num[i];
        }
        sort(num.begin(),num.end());
 
        for(int i = 0; i<n; i++)
        {
            int set_Bit = countSetBit(num[i]);
            v[set_Bit].push_back(num[i]);
        }
 
        while(q--)
        {
            lli l, r, k, ans = 0;
            cin>>l>>r>>k;
            vector<lli>:: iterator upper;
            int lower = lowerBound(k, l); 
            upper = upper_bound(v[k].begin(), v[k].end(), r);
            ans = (upper-v[k].begin()) - lower;
            cout<<ans<<"\n";
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