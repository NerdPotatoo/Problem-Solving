#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    long long  n,m;
    cin >> n >> m;
    vector<long long> a;
    for(int i = 0; i<m; i++){
        long long b;
        cin >> b;
        a.push_back(b);
    }
    long long cnt = a[0]-1;
    for(int i = 1; i<m; i++){
        if(a[i] >= a[i-1] ){
            cnt += (a[i]-a[i-1]);
        }
        else if(a[i]<a[i-1] ){
            cnt += (n-a[i-1]+a[i]);
        }
    }
    cout << cnt << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}