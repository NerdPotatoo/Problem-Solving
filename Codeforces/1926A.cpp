#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int tc;
    cin >> tc;
    while(tc--)
    {
        int cnt_a = 0,cnt_b = 0;
        string s;
        cin >> s;
        for(int i = 0; i<5; i++){
            if(s[i]=='A'){
                cnt_a++;
            }
            else{
                cnt_b++;
            }
        }
        if(cnt_a>cnt_b){
            cout << "A\n";
        }
        else {
            cout << "B\n";
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

