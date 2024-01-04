#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, st, ed, sum = 0;  // st == starting index,  ed == ending index
    cin>>n;
    int arr[n];
    cin>>st>>ed;
    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = st; i<=ed; i++){
        sum += arr[i];
    }
    cout<<sum<<endl;
}