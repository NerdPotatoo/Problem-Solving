#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define end '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    for(int i =1; i<=t; i++)
    {
        int a[6];
        for(int j =0; j<6; j++){
            cin>>a[j];
        }
        int dX = a[0] + a[4]-a[2];
        int dY = a[1] + a[5]-a[3];
        ll area = abs((a[2]-a[0])*(a[5]-a[1])-(a[3]-a[1])*(a[4]-a[0]));
        cout<<"Case "<<i<<": "<<dX<<" "<<dY<<" "<<area<<'\n';
    }

    return 0;
}