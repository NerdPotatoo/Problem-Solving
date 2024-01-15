#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int a[4],b[4];
        for(int i = 0; i<4; i++){
            cin >> a[i];
            cin >> b[i];
        }
        
        int dis1 = ((a[0] - a[2])*(a[0] - a[2])) + ((b[0] - b[2])*(b[0] - b[2]));
        int dis2 = ((a[0] - a[1])*(a[0] - a[1])) + ((b[0] - b[1])*(b[0] - b[1]));
        if(dis1==dis2){
            cout << dis1 << "\n";
        }
        else{
            int mn = min(dis1,dis2);
            cout << mn << "\n";
        }
    }
}