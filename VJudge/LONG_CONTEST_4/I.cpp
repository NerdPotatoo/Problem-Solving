#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define end '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i<n; i++)
        {
            cin>>v[i];
        }
        int cnt = 0;
        for(int i = 0; i<n-1; i++)
        {
            for(int j = i; j<n; j++)
            {
                if(v[i]>v[j]){
                    cnt++;
                    swap(v[i],v[j]);
                }
            }
        }
        cout<<"Optimal train swapping takes "<<cnt<<" swaps.\n";
    }

    return 0;
}