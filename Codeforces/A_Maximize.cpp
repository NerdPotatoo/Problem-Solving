#include<bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int x,int y){
    if(y == 0) return x;
    else gcd(y, x%y);
}

void solve()
{
    // CODE HERE
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        int y = x-1;
        
        while(gcd(x,y)+y > x){
            y--;
        }
        cout << y << endl;

    }
    
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}