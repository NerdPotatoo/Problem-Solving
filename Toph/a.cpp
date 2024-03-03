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
        vector<long long> v;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                long long X = (x[i] - x[j])*(x[i] - x[j]);
                long long Y = (y[i] - y[j])*(y[i] - y[j]);
                long long d = X+Y;
                v.push_back(d);
            }
        }
        // for(int i = 0; i<v.size(); i++){
        //     ans = max(ans, v[i]);
        // }
        sort(v.begin(), v.end());
        ans = v[v.size()-1];
        cout << "Case "<< i <<": "<< ans << "\n";
    }
}