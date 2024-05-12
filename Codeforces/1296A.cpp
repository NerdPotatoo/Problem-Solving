#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, sum = 0, cnt_e = 0, cnt_o = 0;
        cin >> n;
        int a[n];

        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if(a[i]%2 ==0) cnt_e++;
            else cnt_o++;
        }
        if(sum%2 != 0) cout << "YES\n";
        else{
            if(cnt_e > 0 && cnt_o > 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}