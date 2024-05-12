#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],brr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    for(int i =0; i<n; i++){
        brr[arr[arr[i]-1]-1] = arr[i]; 
    }
    for(int i = 0; i<n; i++){
        cout<<brr[i]<<" ";
    }

} 