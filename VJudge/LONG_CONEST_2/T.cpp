#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
     int t;
    cin >> t;
    for(int i = 1; i<=t; i++){
        long long a,b,c, t1, t2, f = 0;
        cin >> a >> b >> c;
        if(a>b && a>c){
            t1 = (b*b) + (c*c);
            if(a*a == t1){
                f = 1;
            }
        }
        else if(b>a && b>c){
            t1 = (a*a) + (c*c);
            if(b*b == t1){
                f = 1;
            }
        }
        else if(c>b && c>a){
            t1 = (b*b) + (a*a);
            if(c*c == t1){
                f = 1;
            }
        }
        if(f){
            cout << "Case "<<i<<": yes\n";
        }
        else{
            cout << "Case "<<i<<": no\n";
        }
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}