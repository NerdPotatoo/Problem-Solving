#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    string s;
    cin >> s;
    bool k = false;
    for(int i = 0; i< s.size(); i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            k = true;
            break;
        }
    }
    if(k){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

