#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    
    for(int i = 1; i<=t; i++){
        int n;
        cin >> n;
        long long x[n], y[n];
        for(int i = 0; i < n; i++){
            cin >> x[i] >> y[i];
        }
        long long ans = 0;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                long long X = (x[i] - x[j])*(x[i] - x[j]);
                long long Y = (y[i] - y[j])*(y[i] - y[j]);
                long long d = X+Y;
                ans = max(ans,d);
            }
        }
        cout << "Case "<< i <<": "<< ans << "\n";
    }
}