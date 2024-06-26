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
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        if((x1<y1 && x2<y2)){
            cout<<"YES\n";
        }
        else if((y1<x1 && y2<x2)){
            cout<<"YES\n";
        }
        else if(((x1==x2 && y1<y2) && (x1<y1 && x2<y2)) ){
            cout<<"YES\n";
        }
        else if((x1==y1 && (x2>y2 || y2<x2))){
            cout<<"YES\n";
        }
        else if((x1==x2 && y1==y2)){
            cout<<"YES\n";
        }
        else if(((x1==x2)&&(x1<y1) ||(y1==y2)&&(y1<x1))){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}