#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    int a[d+1];
    for(int i = 1; i<=d; i++)
    {
        a[i] = 1;
    }

    for(int i = k; i<= d; i+= k)
    {
        a[i] = 0;
    }
    for(int i = l; i<= d; i+= l)
    {
        a[i] = 0;
    }
    for(int i = m; i<= d; i+= m)
    {
        a[i] = 0;
    }
    for(int i = n; i<= d; i+= n)
    {
        a[i] = 0;
    }
    int sum = 0;
    for(int i = 1; i<=d; i++) sum += a[i];
    cout << d-sum;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

