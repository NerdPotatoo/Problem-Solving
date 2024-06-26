#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    double x1,y1,x2,y2,x3,y3,x4,y4;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4){
        double x= x1+x3-x2;
        double y= y1+y3-y2;
        cout<<fixed<<setprecision(3)<<x<<" "<<y<<endl;
    }

    return 0;
}