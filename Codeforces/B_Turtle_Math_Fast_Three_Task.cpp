#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin >> t;
    while(t--)
    {
        int n, sum = 0, cnt1, cnt2 = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i<n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum%3==0){
            cnt1 = 0;
        }
        else if((sum+1)%3==0){
            cnt1 = 1;
        }
        else if((sum+2)%3==0){
            cnt1 = 2;
        }

        for(int i = 0; i<n; i++)
        {
            if((sum-a[i])%3==0){
                cnt2 = 1;
                break;
            }
        }
        if(cnt2!=0){
            cout << min(cnt1,cnt2)<< endl;
        }
        else{
            cout << cnt1 << endl;
        }
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}