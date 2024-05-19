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
        int n,cnt =0;
        string s;
        cin>>n;
        cin.ignore();
        getline(cin,s);
        stack<char> bracket;
        for(int i =0; i<s.size(); i++)
        {
            if(s[i]=='('){
                bracket.push('(');
            }
            if(s[i]==')'){
                if(bracket.empty()) cnt++;
                else{
                    if(bracket.top() =='('){
                    bracket.pop();
                }
                }
                
            }
        }
        cout<<bracket.size()<<'\n';
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}