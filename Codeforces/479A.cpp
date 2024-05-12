#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int  a, b, c, temp;
    cin >> a >> b >> c;
    vector<int> v;
    temp = a+b*c;
    v.push_back(temp);
    temp = a*(b+c);
    v.push_back(temp);
    temp = a*b*c;
    v.push_back(temp);
    temp = (a+b)*c;
    v.push_back(temp);
    temp = a+b+c;
    v.push_back(temp);
    sort(v.rbegin(), v.rend());
    cout << v[0];

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

