#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool k = true;
    if(n == 1){
        k = false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            k = false;
            break;
        }
    }
    if(k == true){
        cout << "NO PUNISHMENT";
    }
    else{
        for(int i = 1; i <= n; i++){
            cout << "I DID NOT DO THE ASSIGNMENT." << "\n";
        }
    }
}