#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k, cnt =0;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    k -= 1;
    for(int i = 0; i<n; i++){
        if(arr[i] >= arr[k] && arr[i]>0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}