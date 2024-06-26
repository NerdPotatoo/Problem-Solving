#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define end '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int GCD(int a,int b)
{
    if(b==0) return a;
    return GCD(b,a%b);
}
int32_t main()
{
    fastIO;
    // CODE HERE
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        int G=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++)
            {
                G+=GCD(i,j);
            }
        }
        cout<<G<<endl;
    }

    return 0;
}