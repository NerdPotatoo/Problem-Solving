#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k, q;
        cin >> k >> q;
        int a[k], b[q];
        for(int i = 0; i<k; i++){
            cin >> a[i];
        }
        for(int i = 0; i<q; i++){
            cin >> b[i];
        }
        for(int i = 0; i<q; i++){
            int ans;
            if(a[0] < b[i]){
                ans = b[i];
                while(ans>=a[0]){
                    ans--;
                }
            }
            else if(a[0] == b[i]){
                ans = b[i]-1;
            }
            else{
                ans = b[i];
            }
            cout << ans << " ";
        }
        cout << endl;
    }
}