#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    bool flag = true;
    if(n<=1){
        flag = false;
    }
    for(int i = 2; i<=sqrt(n); i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}