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
    for(int i = 1; i<=t; i++)
    {
        int x1,y1,x2,y2,m;
        cin>>x1>>y1>>x2>>y2>>m;
        cout<<"Case "<<i<<":\n";
        while(m--){
            int x,y;
            cin>>x>>y;
            if((x>=x1 && x<=x2) && (y>=y1 && y<=y2)){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
    }

    return 0;
}