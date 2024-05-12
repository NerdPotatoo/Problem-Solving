#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    float a, amount =0;
    for(int i =1; i <= n; ++i){
        cin >> a;
        amount += a/100;
    }
    amount = amount/n*100;
    cout << amount;
}