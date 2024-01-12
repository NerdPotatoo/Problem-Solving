#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    int x =1;
    while(tc--){
        int n;
        cin >> n;
        float arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        float avg = 0;
        for(int i = 0; i < n; i++){
            avg += arr[i];
        }
        avg /= n*1.0;
        printf("Case %d: %.03f\n", x, avg);
        x++;
    }
}