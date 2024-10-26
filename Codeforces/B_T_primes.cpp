#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

const int N = 1000005;
bool flag[N];

void seive()
{
	int i,j,val;
	for(i=2;i<=N;i++) flag[i] = 0;
    val=sqrt(N)+1;
    for(i=2;i<val;i++){
        if(flag[i] == 0){
            for(j=i;j*i<=N;j++)
            {
                flag[i*j] = 1;
            }
        }   
    }
}

int32_t main()
{
    fastIO;
    // CODE HERE
    seive();
    int n;
    cin>>n;
    while(n--)
    {
        ll a;
        cin>>a;
        ll x = sqrt(a);
        if(a == 1){
            cout<<"NO\n";
        }
        else if(x*x == a && flag[x] == 0)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}