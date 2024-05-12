#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, cnt = 0, ans = 0;
        cin >> n; 
        while(n>0){
            if(n%2==1) cnt++;
            n/=2;
        }
        for(int i = 0; i<cnt; i++){
            ans += pow(2,i);
        }
        cout << ans << endl;
    }
}