#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, even = 0, odd = 0, cnt_odd_idx = 0, ans = -1; 
        bool flag = true;
        cin >> n;
        int a[n];
        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]%2==0) even++;
            else odd++;
        }
        for(int i = 0; i<n; i+=2)
        {
            if(a[i]%2 != 0){
                cnt_odd_idx++;
            }
        }
        
        if(n%2==0){
            if(even==odd){
                cout << cnt_odd_idx << endl;
            }
            else {
                cout << -1 << endl;
            }

            
        }
        else{
            if(even>odd && (even - odd) == 1){
                cout << cnt_odd_idx << endl;
            }
            else {
                cout << -1 << endl;
            }
           
        }
    }
}
