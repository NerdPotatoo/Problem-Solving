#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k, s, cnt = 0;
    cin >> k >> s;
    for(int x = 0; x<=k; x++)
    {
        for(int y = 0; y<=k; y++)
        {
            if(s-x-y >= 0 && s-x-y <= k) cnt++;
        }
    }
    cout << cnt << endl;
}