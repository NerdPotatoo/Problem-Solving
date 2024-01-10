#include<bits/stdc++.h>
using namespace std;

int main(){
    long long st, ed, first = 0, second = 1, fib = 0;
    cin>>st>>ed;
    while(fib<=ed){
        if(fib>=st){
            cout<<fib<<endl;
        }
        fib = first+second;
        first = second;
        second = fib;
    }
}