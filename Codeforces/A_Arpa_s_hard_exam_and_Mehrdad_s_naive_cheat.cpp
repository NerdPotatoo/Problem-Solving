#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int n;
    cin>>n;
    if(n==0){
        cout<<1;
        return 0;
    }
    int ans = n%4;
    if(ans==0) cout<<6<<endl;
    else if(ans==1) cout<<8<<endl;
    else if(ans==2) cout<<4<<endl;
    else if(ans==3) cout<<2<<endl;
    return 0;
}