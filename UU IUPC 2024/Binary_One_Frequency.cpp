#include<bits/stdc++.h>
using namespace std;
#define lli long long int
void solve()
{
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        vector<double> v[61];
        double n,q;
        cin>>n>>q;
        vector<double> num(n);
        for(int i = 0; i<n; i++)
        {
            cin>>num[i];
        }
        
        for(int i = 0; i<n; i++)
        {
            int set_Bit = __builtin_popcount(num[i]);
            v[set_Bit].push_back(num[i]);
        }
        for( auto& nums:v){
            sort(nums.begin(),nums.end());
        }
        while(q--)
        {
           double l,r;
           lli k;
            cin>>l>>r>>k;
            if(k<1 || k>60 || v[k].empty()) cout<<0 <<'\n';
            else{
                auto lw = lower_bound(v[k].begin(), v[k].end(), l) ;
                auto hi = upper_bound(v[k].begin(), v[k].end(), r) ;
                uint64_t cnt = 0;
                for(auto it = lw; it!=hi; ++it){
                    cnt++;
                }
                cout<<cnt<<'\n';
            }
            
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