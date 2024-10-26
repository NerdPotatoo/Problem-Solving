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
    cin>>n>>k;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }
    vector<int> pref(n);
    pref[0] = v[0];
    for(int i = 1; i<n; i++)
    {
        pref[i] = pref[i-1]+v[i];
    }

    int mn_sum = INT_MAX, sum = 0, idx, i = 0;
    k--;
    while(k<n)
    {
        if(i==0){
            sum = pref[k];
        }
        else{
            sum = pref[k]-pref[i-1];
        }
        if(sum<mn_sum)
        {
            mn_sum = sum;
            idx = i;
        }
        i++;
        k++;
    }
    cout<<idx+1;
    return 0;
}