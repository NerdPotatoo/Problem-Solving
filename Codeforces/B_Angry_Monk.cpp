#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(k);
        for(int i = 0; i<k; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        int cnt = 0;
        for(int i = 0; i<k-1; i++)
        {
            if(v[i] == 1){
                cnt++;
            }
            else {
                cnt += ((2*v[i])-1);
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}