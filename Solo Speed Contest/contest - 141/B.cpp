#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    int prime_d = 0, second_d = 0;
    for(int i = 0; i< n; i++){
        prime_d += a[i][i];
        second_d += a[i][n-i-1];
    }
   
    int ans = abs(prime_d-second_d);
    cout << ans;

}