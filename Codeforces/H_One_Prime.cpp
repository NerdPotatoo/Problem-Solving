#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k = 1;
    cin >> n;
    if(n < 2) k = 0;
    for(int i =2; i<=sqrt(n); i++){
        if(n%i == 0) 
        {
            k = 0;
            break;
        }
    }
    if(k) cout << "YES\n";
    else cout << "NO\n";
}