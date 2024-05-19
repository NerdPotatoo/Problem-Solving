#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int n, k, sum = 0, cnt = -1 ,ft = 0;
    cin >> n >> k;
    vector<int> nums(n), hash;
    for(int i = 0; i<n; i++)
    {
        cin>>nums[i];
        sum += nums[i];
        hash.push_back(sum);
    }
    for(int i = 0; i<hash.size(); i++)
    {
        sum = hash[i];
        if(sum==k){
            cnt = i+1;
            break;
        }
        else if(sum>k && i<hash.size()-1){
            hash[i+1] -= hash[ft];
            ft++;
        }
    }
    if(cnt>-1){
        cout<<cnt;
    }
    else cout<<0;
    // for(auto x:hash)
    // {
    //     cout<< x<<" ";
    // }

}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}