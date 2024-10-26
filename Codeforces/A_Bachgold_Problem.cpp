#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int n; cin>>n;
    if(n==2 || n == 3){
        cout<<1<<endl<<n<<endl;
        return 0;
    }
    int cnt = 0;
    bool odd = false;
    if(n%2!=0)
    {
        n -= 3;
        odd = true;
    }
    cnt = n/2;
    if(odd) cout<<cnt+1<<endl;
    else cout<<cnt<<endl;
    for(int i = 1; i<=cnt; i++) cout<<2<<" ";
    if(odd) cout<<3<<endl;
    return 0;
}