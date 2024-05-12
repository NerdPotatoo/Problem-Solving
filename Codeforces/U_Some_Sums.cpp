#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b,  ans = 0;
    cin >> n >> a >> b;
    for(int i = 1; i<= n; i++){
        int sum_digits = 0;
        int x = i;
        while(x > 0){
            sum_digits += x%10;
            x /= 10; 
        }
        
        if(sum_digits >= a && sum_digits <= b){
            ans += i;
        }
    }
    cout << ans;
}