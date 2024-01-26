#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(pow(2,n)>pow(n,2)){
        cout <<"POWER";
    }
    else if(pow(2,n)<pow(n,2)){
        cout << "SQUARE";
    }
    else {
        cout << "SAME";
    }
}