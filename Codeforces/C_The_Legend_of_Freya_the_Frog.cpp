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
    int t;
    cin>> t;
    while(t--)
    {
        int x,y, z, jump_x, jump_y;
        cin>>x>>y>>z;
        if(x%z == 0) jump_x = (x/z);
        else jump_x = (x/z)+1;
        if(y%z == 0) jump_y = (y/z);
        else jump_y = (y/z)+1;
        if(jump_y>=jump_x)
        {
            cout<< 2*jump_y<<endl;
        }
        else{
             cout<< (2*jump_x) - 1<<endl;
        }
        
    }
    return 0;
}