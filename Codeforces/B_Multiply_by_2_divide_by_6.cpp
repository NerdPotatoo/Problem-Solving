#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
int count = 0;
bool check(ll n, int& cnt)
{
    if(n == 1) return true;
    if(n%6 != 0 && n%2==0) return false;
    if(n%6==0) {
        cnt+=1;
        check(n/6, cnt);
        
    }
    else 
    {
        cnt+=1;
        check(n*2, cnt);
    }
} 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        int cnt = 0;
        if(check(n, cnt)) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}