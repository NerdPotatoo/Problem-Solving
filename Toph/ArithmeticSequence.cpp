#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = n*(n+1)/2;
    int m;
    cin >> m;
    int a[m];
    for(int i = 0; i<m; i++){
        cin >> a[i];
        sum -= a[i];
    }
    cout << sum;
}