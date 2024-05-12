#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    char ch[31] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/','\0'};
    char p;
    string s;
    cin>>p>>s;
    for(int i = 0; i<s.size(); i++){
        int idx;
        for(int j = 0; j<=29; j++){
            if(ch[j]==s[i]){
                idx = j;
                if(p == 'R'){
                    idx--;
                }
                else{
                    idx++;
                }
                s[i] = ch[idx];
                break;
            }
        }
    }
    cout << s << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}