#include<bits/stdc++.h>
using namespace std;
int main(){
    long long price, money, bananas, need_money = 0;
    cin>>price>>money>>bananas;
    for(int i = 1; i<= bananas; i++){
        need_money += price*i;
    }
    if(need_money<=money){
        cout<<0<<endl;
    }
    else{
        need_money = need_money-money;
        cout<<need_money<<endl;
    }
    
}