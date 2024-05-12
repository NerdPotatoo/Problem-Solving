#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int n, k, solved = 0, time;
    cin >> n >> k;
    time = 240 - k;
    for(int i = 1; i <= n; i++){
            k = i*5;
        if(time >= k){
            time -= k;
            solved++;
        }
        else
        {
            break;
        }
    }
    cout << solved;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

