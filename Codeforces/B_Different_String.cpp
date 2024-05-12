#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        string s,r = "";
        cin>>s;
        int f=1;
        for(int i =0; i<s.size()-1; i++){
            if(s[i]!=s[i+1]){
                swap(s[i],s[i+1]);
                f = 0;
                break;
            }
        }
        if(f){
            cout << "NO\n";
        }
        else{
            cout<<"YES\n"<<s<<"\n";
 
        }
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}