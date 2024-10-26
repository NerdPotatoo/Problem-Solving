#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
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
        if(n<=9){
            cout<<n<<endl;
        }
        else{
            int ans = floor(n/11)+9;
            cout<<ans<<endl;
        }
    }

    return 0;
}