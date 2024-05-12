#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int s, n;
    cin >> s >> n;
    vector<pair<int,int>> vp(n);
    for (auto& p : vp) {
        cin >> p.first >> p.second;
    }
    sort(vp.begin(), vp.end());
    for(int i = 0; i<n; i++){
        if(s>vp[i].first){
            s += vp[i].second;
        }
        else{
            s = 0;
            break;
        }
    }
    if (s==0){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

