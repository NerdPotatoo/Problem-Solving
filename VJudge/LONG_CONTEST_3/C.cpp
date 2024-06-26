#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    string s;
    int i =1;
    while(cin>>s){
        if(s[0]=='*'){
            return;
        }
        else if(s[0] =='H'){
            cout<<"Case "<<i<<": Hajj-e-Akbar\n";

        }
        else{
            cout<<"Case "<<i<<": Hajj-e-Asghar\n";
        }
        i++;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}