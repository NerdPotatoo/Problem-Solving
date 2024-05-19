#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    string s;
    cin>>s;
    int i =0,ans =0;
    transform(s.begin(), s.end(), s.begin(), ::tolower); 
    while(i<s.size()){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') ans++;
        i++;
    }
    cout<<ans;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}