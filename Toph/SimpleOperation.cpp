#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; ++i){
        int n1,n2;
        char op;
        cin >> n1 >> op >> n2;
        if(op=='+'){
            cout << "Case " << i << ": " <<(n1+n2) << "\n";
        }
        else if(op=='*'){
            cout << "Case " << i << ": " <<(n1*n2) << "\n";
        }
        else if(op=='-'){
            cout << "Case " << i << ": " <<(n1-n2) << "\n";
        }
    }
} 