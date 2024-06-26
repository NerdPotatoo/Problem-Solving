#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t, test = 1;
    cin>>t;
    while(t--)
    {
        ll W, i,f = 0;
        cin>>W;
        for(i = 2; i<W; i+=2){
            if(W%i==0 && (W/i)%2==1){
                f = 1;
                break;
            }
        }
        if(f){
            cout<<"Case "<<test<<": "<<W/i<<" "<<i<<'\n';
        }
        else{
            cout<<"Case "<<test<<": Impossible\n";
        }
        test++;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}