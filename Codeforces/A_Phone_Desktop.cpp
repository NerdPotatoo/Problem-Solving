#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        int x,y, ans = 0; cin>>x>>y;
        if(x==0 && y ==0){
            ans = 0;
        }
        else if(x==0 && y != 0){
            ans = ceil((float)y/2);
        }
        else if(y==0 && x != 0){

            ans = ceil((float)x/15);
        }
        else{
            // tmp = ans * 15 - y * 4
            int tmp;
            if(y%2==0){
               tmp = (ceil((float)y/2))*7;
            }
            else{
                tmp = (y/2)*7 + 11;
            }
            if(x<=tmp){
                ans = ceil((float)y/2);
            }
            else{
                ans = ceil((float)y/2);
                x -= tmp;
                ans += ceil((float)x/15);
            }
        }

        cout <<ans<<'\n';

    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}