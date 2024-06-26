#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int ans = n;
        ans += n/3;
        int tmp = (n/3)+(n%3);
        while(tmp>2){
            ans += tmp/3;
            tmp %= 3;
        }
        if(tmp == 2){
            ans++;
        }
        cout <<ans<<"\n";
        
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}