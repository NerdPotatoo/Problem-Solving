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
        int n, sum = 3;
        cin >> n;
        string s = "aaa";
        while(n!= sum){
            if(s[2]<'z'){
                sum++;
                s[2]++;
            }
            else if(s[1]<'z'){
                sum++;
                s[1]++;
            }
            else if(s[0]<'z'){
                sum++;
                s[0]++;
            }
        }
        cout << s << endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}