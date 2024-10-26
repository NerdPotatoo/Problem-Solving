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
    cin>>t;
    while(t--)
    {
        int i = 1, n, tmp, x = 0;
        cin>>n;
        while(1)
        {
            tmp = (2*i)-1;
            if(i&1) tmp *= -1;
            x += tmp;
            i++;
            if(x>n || x<(-n)) break;
        }
       if(x<0) cout<<"Sakurako\n";
       else cout<<"Kosuke\n"; 
    }
    
    return 0;
}