#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    for(int i = 0; i<s.size()-1;)
    {
        if(s[i] == '1' && s[i+1] == '0' || s[i] == '0' && s[i+1] == '1'){
            s.erase(i,2);
            if(s.size()==0) break;
            if(i>0) i--;
        } 
        else{
            i++;
        }
    }
    cout<<s.size();

    return 0;
}