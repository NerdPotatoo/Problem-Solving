#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, f = 0;
    cin >> a >> b;

    for(int i = a; i<=b; i++){
        int n = i, k = 1;
        while(n>0){
            if(n%10 != 4 && n%10 != 7){
                k = 0;
                break;
            }
            n /= 10;
        }
        if(k) {
            cout << i << " ";
            f = 1;
        }
    }
    if(f == 0) cout << "-1";
}