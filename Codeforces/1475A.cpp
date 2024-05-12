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
        ll n, ans;
        bool k = false;
        cin >> n;
        if(n%2!=0) k =true;
        while(n>=2){
            n = n/2;
            if(n%2!=0 && n>1){
                k = true;
                break;
            }
        }
      /*  else ans = n/2;
        if(ans%2 != 0 && ans >1) k = true;
       else ans--;
      if(ans%2 != 0 && ans >1) k = true;
        for(int i = ans; i >=3; i-=2){
                ans = i;
            if(n%ans == 0 && ans%2 != 0){
                    k = true;
                    break;
            }
        }
        */
        if(k) cout << "YES\n";
        else cout << "NO\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

