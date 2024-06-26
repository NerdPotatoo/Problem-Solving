#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    string s, ans = "",tmp = "";
    int mx = 0, i = 1;
    while(cin>>s){
        if(s == "E-N-D"){
            transform(ans.begin(), ans.end(), ans.begin(), ::tolower);
            cout<<ans;
            return;
        }
        for(char c:s)
        {
            if(c>='a' && c<='z' || c>='A' && c<='Z' || c=='-'){
                tmp += c;
            }
            else{
                if(!tmp.empty()){
                    if(tmp.size()>ans.size()){
                        ans = tmp;
                    }
                    tmp.clear();
                }
            }
        }
        if(!tmp.empty()&& tmp.size()>ans.size()){
            ans = tmp;
            tmp.clear();
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