#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int tc; 
    cin >> tc;
    while(tc--)
    {
        int a,b,c,d, cnt = 0;
        cin >> a >> b >> c >> d;
        if(a<b){
            cnt++;
        }
        if(a<c){
            cnt++;
        }
        if(a<d){
            cnt++;
        }
        cout << cnt << "\n";

    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}