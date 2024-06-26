#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define end '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
bool IsLeapYear(int y)
{
    if (y % 400 == 0) return true;
    else if(y % 100 == 0) return false;
    else if(y % 4 == 0) return true;
    else return false;
}
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++)
    {
        vector<int> v(4);
        int ans = 0;
        for(int j = 0; j<4; j++)
        {
            cin>>v[j];
        }
        if(v[0]== 29 && v[1] == 2){
            for(int k = v[2]; k<= v[3]; k++) {
                if(IsLeapYear(k))ans++;
            }
            ans--;
        }
        else{
            ans = v[3]-v[2];
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }

    return 0;
}