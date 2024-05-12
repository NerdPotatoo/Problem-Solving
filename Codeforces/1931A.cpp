#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int tc;
    cin >> tc;
    while(tc--){
        string s = "aaa";
        int n, sum = 3, i = 2, j = 2, k = 2;
        cin >> n;
        while(n!=sum){
            for(; i<= 26; i++){
                sum += 1;
                s[2] += 1;
                if(n == sum) break;
            }
            if(n == sum) break;
            for(; j<= 26; j++){
                sum += 1;
                s[1] += 1;
                if(n == sum) break;
            }
            if(n == sum) break;
            for(; k<= 26; k++){
                sum += 1;
                s[0] += 1;
                if(n == sum) break;
            }
        }
        cout << s << "\n";

    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}