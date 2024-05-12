#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(10,0);
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == 'L'){
            for(int j = 0; j<10; j++){
                if(v[j] == 0){
                    v[j] = 1;
                    break;
                }
            }
        }
        else if(s[i] == 'R'){
            for(int j = 9; j>=0; j--){
                if(v[j] == 0){
                    v[j] = 1;
                    break;
                }
            }
        }
        else{
            v[s[i]-48] = 0;
        }
    }
    for(auto x:v){
        cout<<x;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}