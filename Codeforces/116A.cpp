#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n], b[n], cap[n];
    for(int i = 0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    cap[0] = b[0]-a[0];
    for(int i = 1; i<n; i++){
        cap[i] = cap[i-1]-a[i]+b[i];
    }
    sort(cap, cap+n);
    cout << cap[n-1];
}