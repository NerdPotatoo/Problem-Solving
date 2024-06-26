#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string toBinary(int x)
{
    
    vector<int> v;
    while(x>0)
    {
        v.push_back(x%2);
        x /= 2;
    }
    string s = "";
    for(int x:v){
        s += x+48;
    }
    //cout<<s<<endl;
    int sz = s.size();
    //cout<<endl;
    while(s.size() != 8){
        s+="0";
    }
    reverse(s.begin(),s.end());
    //cout<<s<<endl;
    return s;
}
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++)
    {
        string dec, bin;
        cin>>dec>>bin;
        int a,b,c,d;
        sscanf(dec.c_str(),"%d.%d.%d.%d",&a,&b,&c,&d);
        vector<string> v(4);
        v[0] = toBinary(a);
        v[1] = toBinary(b);
        v[2] = toBinary(c);
        v[3] = toBinary(d);
        string tmp = v[0]+"."+v[1]+"."+v[2]+"."+v[3];
        //cout<<tmp<<endl;
        if(tmp == bin){
            cout<<"Case "<<i<<": "<<"Yes\n";
        }
        else{
            cout<<"Case "<<i<<": "<<"No\n";
        }
    }
    return 0;
}