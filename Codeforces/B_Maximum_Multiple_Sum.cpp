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
    while(t--)
    {
        int n;
        cin>>n;
        int x = 2, sum = 0;
        for(int i = x; i<=n; i+=x)
        {
            sum+=i;
        }
        if(sum<=n){
            cout<<n<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
    return 0;
}