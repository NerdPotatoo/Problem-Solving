#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c, ans = 0;
    cin >> a >> b >> c;
    ans = min(a, min(b,c));
    a -=ans;
    b -= ans;
    c -= ans;
    int temp = min(a/2, min(b,c));
    a -= temp;
    b -= temp;
    c -= temp;
    ans += temp;
    ans += min(a/2,c);
    cout << ans;
}