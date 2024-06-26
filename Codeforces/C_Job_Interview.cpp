#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t; cin>>t;
    while(t--)
    {
        int n, m; cin>>n>>m;
        int sz = n+m+1;
        vector<ll> prog(sz), test(sz);
        ll ans[sz] = {0};
        for(int i = 0; i<sz; i++){
            cin>>prog[i];
        }
        for(int i = 0; i<sz; i++){
            cin>>test[i];
        }

        for (int i = 0; i < sz; i++){
            
        }
        {
            /* code */
        }
        
        for(int i = 0; i<sz; i++)
        {
            int pro = n, tst = m;
            for(int j = 0; j<sz; j++)
            {
                if(j!=i)
                {
                    //cout<<i<<endl;
                    if(prog[j]>test[j])
                    {
                        if(pro>0){
                            ans[i] += prog[j];
                            pro--;
                        }
                        else if(tst>0){
                            ans[i] += test[j];
                            tst--;
                        }
                    }
                    else if(prog[j]<test[j])
                    {
                        if(tst>0){
                            ans[i] += test[j];
                            tst--;
                        }
                        else if(pro>0){
                            ans[i] += prog[j];
                            pro--;
                        }
                    }
                }
                //cout<<ans[i]<<endl;
            }
        }
        for(int x:ans){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}