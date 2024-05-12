#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    bool k = false;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(a[i]==1){
            k = true;
        }
    }
    if(k==true){
        cout << "HARD";
    }
    else{
        cout << "EASY";
    }
}