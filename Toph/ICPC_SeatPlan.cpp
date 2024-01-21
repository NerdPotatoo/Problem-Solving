#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int size = n*m;
    int a[size], cnt = 0;;
    for(int i = 0; i<size; i++){
        cin >> a[i];
        if(a[i]==0){
            cnt++;
        }
    }
    // sort(a,a+size);
    // for(int i = 0; i<size; i++){
    //     if(a[i]==1){
    //         break;
    //     }
    //     cnt++;
    // }
    cout << cnt << "\n";
}