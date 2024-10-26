#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int n, m;
    cin>>n>>m;
    vector<string> name(n), ip(n), name2(m), ip2(m);
    for(int i =0; i<n; i++)
    {
        cin>>name[i]>>ip[i];
    }
    for(int i =0; i<m; i++)
    {
        cin>>name2[i]>>ip2[i];   
    }
    for(int i = 0; i<m; i++)
    {
        string tmp = ip2[i];
        tmp.pop_back();
        for(int j = 0; j<n; j++)
        {
            if(tmp == ip[j]){
                //cout<<"yes\n";
                cout<<name2[i]<<" "<<ip2[i]<<" #"<<name[j]<<endl;
                break;
            }
        }
    }
    return 0;
}