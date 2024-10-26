#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int n, k;
    cin>> n >> k;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }
    int i = 0, j = 0, flg = 1;
    int mx = 0,sum = 0, cnt = 0;
    while(j<n && i<n){
        if(flg) sum += v[j];
        if(sum<=k)
        {
            j++;
            cnt++;
            flg = 1;
        }
        else{
            sum -= v[i];
            i++;
            cnt--;
            flg = 0;
        }
        // cout<<"j = "<<j<<" i "<<i<<" s "<<sum<<" c "<<cnt<<endl; 
        mx = max(cnt, mx);
    }
     cout<<mx;
 
    return 0;
}