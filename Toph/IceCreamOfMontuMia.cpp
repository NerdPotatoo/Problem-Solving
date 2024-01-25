#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, k = 0;
    cin >> n ;
    for(int i = 1; i <= 3; ++i){
       cin >> a;
       if((n-a)>=10){
        k = 1;
       }
    }
    if(k==1){
        cout << "Yes :-D";
    }
    else {
        cout << "No :-(";
    }
}