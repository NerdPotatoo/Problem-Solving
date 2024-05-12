#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b, cnt = 0;
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a >> b;
        if((a+2) <= b){
            cnt++;
        }
    }
    cout << cnt;
}