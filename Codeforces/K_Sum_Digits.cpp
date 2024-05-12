#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, sum = 0;
    cin >> n >> a;
    while(a>0){
        sum += a%10;
        a /= 10;
    }
    cout << sum << endl;
}