#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, max_gcd;
        cin >> n;
        max_gcd = n/2;
        cout << max_gcd << "\n";
    }
    return 0;
}