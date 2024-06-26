#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve()
{
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        int n,f,k;
        cin>>n>>f>>k;
        vector<int> v(n);
        for(int i = 0 ; i<n; i++)
        {
            cin>>v[i];
        }
        int fav = v[f-1], flag = 0;
        sort(v.begin(),v.end(),greater<int>());
        for(int i = 0; i<k; i++){
            if(v[i] == fav){
                flag = 1;
                break;
            }
        }
        for(int i = k; i<n; i++)
        {
            if(v[i] == fav && flag == 1){
                flag = 2;
                break;
            }
        }
        // if(flag == 1){
        //     if(v[k] == fav){
        //         flag = 2;
        //     }
        // }
        if(flag == 1 || k == n){
            cout<<"YES\n";
        }
        else if(flag == 2){
            cout<<"MAYBE\n";
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