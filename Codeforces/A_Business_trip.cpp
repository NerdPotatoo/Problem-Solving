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
    int k;
    cin>>k;
    vector<int> v(12);
    for(int i = 0; i<12; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    int i = 11, cnt = 0;
    while(k)
    {
        k -= v[i];
        cnt++;
        i--;
        if(i== -1 || k<= 0)break;
    }
    if(k>0) cout<<-1;
    else cout<<cnt;
    return 0;
}