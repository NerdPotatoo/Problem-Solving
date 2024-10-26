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
        int a,n, evenMax = INT_MIN, oddMax = INT_MIN, evenCnt = 0, oddCnt = 0;
        cin>>n;
        for(int i = 1; i<=n; i++)
        {
            cin>>a;
            if(i%2== 0)
            {
                evenMax = max(evenMax,a);
                evenCnt++;
            }
            else{
                oddMax = max(oddMax,a);
                oddCnt++;
            }
        }
        evenMax += evenCnt;
        oddMax += oddCnt;
        evenMax = max(evenMax,oddMax);
        cout<<evenMax<<endl;
    }
    return 0;
}