#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int n, sum = 0, ans = 0, cnt = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(a[i]>0){
            sum += a[i];
        }
        else if(a[i]==-1){
            cnt++;
        }
        if(a[i]== -1 && sum > 0){
            sum--;
            ans++;
        }

    }
    cout << cnt-ans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

