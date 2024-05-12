#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long l,r, ans;
        cin >> l >> r;
        if(l<r){
            l--;
            ans = (r*(r+1)/2) - (l*(l+1)/2);
        }
        else if(r<l){
            r--;
            ans = (l*(l+1)/2) - (r*(r+1)/2);
        }
        else {
            ans = r;
        }
        
        cout << ans << endl;
    }
}