#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int price, coin, cnt = 1;
    cin >> price >> coin;
    int temp = price;
    while(price%10 != coin  && price%10 != 0){
        price += temp;
        // if(price%10 == 0){
        //     break;
        // }
        cnt++;
    }
    cout << cnt;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}