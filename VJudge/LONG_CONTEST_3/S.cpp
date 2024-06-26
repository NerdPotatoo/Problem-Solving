#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    map<string,int> mp;
    vector<int> v(5);
    string key = "";
    int n;
    while(cin>>n){
        if(n==0) break;
        int mx = INT_MIN,cnt = 0;
        for(int i = 0; i<n; i++){
            for(int j =0; j<5; j++){
                cin>>v[j];
            }
            for(int j= 0; j<5; j++){
                key += to_string(v[j]);
            }
            sort(key.begin(),key.end());
            if(!mp[key]){
                mp[key] = 0;
            }
            mp[key]++;
            v.clear();
            key.clear();
        }
            // for(auto x:mp){
            // cout<<x.first<<" "<<x.second<<'\n';
            // }
            for(auto x:mp){
            mx = max(mx, x.second);
            }
            for(auto x:mp){
            if(mx == x.second) cnt++;
            }
        cout<<mx*cnt<<endl;
        mp.clear();
    }
    

}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}