#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int n, t;
    cin>>n>>t;
    if(n==1 && t==10){
        cout<<-1<<endl;
    }
    else if(n>=1 && t<10)
    {
        while(n--)
        {
            cout<<t;
        }
        cout<<endl;
    }   
    else{
        cout<<1;
        n-=1;
        while(n--)
        {
            cout<<0;
        }
        cout<<endl;
    }

    return 0;
}