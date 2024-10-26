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
        int t1, t2, t3, t4, t5, t6, t7,t8,t9,t10,t11,t12;
        vector<int> v(3);
        for(int i = 0; i<3; i++)
        {
            cin>>v[i];

        }
        sort(v.begin(), v.end());
        int a = v[0], b = v[1], c = v[2];

        t1 = (a+5)*b*c;
        t2 = (a+4)*(b+1)*c;
        t3 = (a+3)*(b+2)*c;
        t4 = (a+3)*(b+1)*(c+1);
        t5 = (a+2)*(b+3)*c;
        t6 = (a+2)*(b+2)*(c+1);
        t7 = (a+2)*(b+1)*(c+2);
        t8 = (a+1)*(b+2)*(c+2);
        t9 = (a+1)*(b+3)*(c+1);
        t10 = (a+1)*(b+1)*(c+3);
        t11 = (a)*(b+2)*(c+3);
        t12 = (a)*(b+3)*(c+2);
        int ans = max({t1, t2, t3, t4, t5, t6, t7,t8,t9,t10,t11,t12});
        cout<<ans<<endl;
         
    }

    return 0;
}