#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[3],brr[3];
    for(int i = 0; i<3; i++) {
        cin>>arr[i];
    }
     for(int i = 0; i<3; i++) {
        brr[i] = arr[i];
    }
    sort(arr, arr+3);
    for(int i = 0; i<3; i++) {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    for(int i = 0; i<3; i++) {
        cout<<brr[i]<<endl;
    } 
}