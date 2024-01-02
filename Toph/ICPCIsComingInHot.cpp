#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int arr[10] = {0};
    cin>>s;

    for(int i = 0; i<s.size(); i++){
       arr[s[i]]++;
    }
    
    int mx = INT_MIN,indx;
    for(int i =0; i<10 ;i++){
        mx = max(arr[i],mx);
    }
    for(int i =0; i<10 ;i++){
       if(mx == arr[i]){
        indx = i;
        break;
       }
    }
    cout<<mx<<endl;
    cout<<indx<<endl;
}