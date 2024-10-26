#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int n,m;
    cin>>n>>m;
    if(n<m)
    {
        cout<<-1<<endl;
        return 0;
    }
    int i = 1;
    while(1)
    {
        ll mul = 1LL * i * m;
        if(mul * 2 >= n){
            break;
        }
        i++;
    }
    cout<<i*m<<endl;
    return 0;
}