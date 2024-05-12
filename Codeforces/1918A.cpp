#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
     cin >> t;
     while(t--){
        int n, m, k = 2,ans;
        cin >> n >> m;
        if((n%2 == 0) && (m%2 == 0)){
             ans = n*m/k;
        }
        else if((n%2 != 0) && (m%2 == 0)){
            ans = n*(m/k);
        }
        else if((n%2 == 0) && (m%2 != 0)){
            int temp = m/k;
            ans = temp*n;
            temp = m - (temp * temp);
            ans += (temp * n)/k;
        }
        else{
            if(n<m){
                ans = (m/k)*n;
            }
            else if(n>m){
                ans = (n/k)*m;
            }
        }
        cout << ans << "\n";
     }
}