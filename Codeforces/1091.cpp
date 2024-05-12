#include<bits/stdc++.h>
using namespace std;

int main(){
    int y, b, r;
    cin>>y>>b>>r;
 
    while(r>=3){
        if(y>=(r-2) && b>=(r-1)){
            cout<<(3*r)-3;
            return 0;
        }
        else{
            r--;
        }
    }
}