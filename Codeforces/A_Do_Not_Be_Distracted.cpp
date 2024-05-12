#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s, tmp = "";
        cin >> s;
        for(int i = 0; i<s.size()-1; i++){
            if(s[i]==s[i+1]){
                continue;
            }
            else{
                tmp += s[i];
            }
        }
        tmp += s[s.size()-1];
        set<char> st;
        for(int i =0; i<tmp.size();i++){
            st.insert(tmp[i]);
        }
        //cout << st.size() << " " <<tmp.size();
        if(st.size()<tmp.size()){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
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