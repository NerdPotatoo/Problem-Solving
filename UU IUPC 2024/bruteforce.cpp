#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> v[61];
void solve()
{
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        v[61].clear();
        int n,q;
        cin>>n>>q;
        vector<long long int> num(n);
        for(int i = 0; i<n; i++)
        {
            cin>>num[i];
        }
        
        sort(num.begin(),num.end());
        for(int i = 0; i<n; i++)
        {
            int set_Bit = __builtin_popcount(num[i]);
            v[set_Bit].push_back(num[i]);
        }
        for(int i = 0; i<61; i++){
            cout << i <<" : ";
            for(int j = 0; j<v[i].size(); j++){
                cout<<v[i][j]<<" ";
            }
            cout<<'\n';
        }
        // while(q--)
        // {
        //     int l,r,k, cnt = 0;
        //     cin>>l>>r>>k;
        //     for(int i = 0; i<v[k].size(); i++){
        //         //cout<<v[k][i] <<" ";
        //         if(v[k][i] >= l && v[k][i] <= r) cnt++;
        //     }
        //     //cout<<'\n';
            
        //      cout<<cnt<<'\n';
        // }
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}