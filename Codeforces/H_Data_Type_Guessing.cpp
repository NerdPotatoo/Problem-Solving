#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, k, n;
    cin >> n >> k >> a;
    double x = (k*n)/a;
    long long y = (k*n)/a;
    if(x-y>0){
        cout << "double";
    }
    else if(x > 2147483647){
        cout << "long long";
    }
    else{
        cout << "int";
    }
}