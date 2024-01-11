#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    float arr[n],x =0;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i<n; i++){
        x += arr[i];
        if(i==0){
            cout << arr[i] << "\n";
        }
        else{
            // for(int j = 0; j<=i; j++){
                 
            //     x += arr[j]; 
            // }
            cout << x/(i+1) << "\n";
        }
    }
}