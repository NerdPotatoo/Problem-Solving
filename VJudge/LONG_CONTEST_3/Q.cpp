#include<bits/stdc++.h>
using namespace std;
#define ll long long
int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, a%b);
}
void solve()
{
    // CODE HERE
    int n;
    while(cin>>n)
    {
        if(n==0) return;
        int G = 0;
        for(int i = 1; i<n; i++){
            for(int j = i+1; j<=n; j++){
                G += gcd(i,j);
            }
        }
        cout<<G<<'\n';
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}