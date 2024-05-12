#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    long long int a,b,c,d;
    cin >> a >> b >> c >> d;
    if((a+b-c)==d || (a-b+c)== d){
        cout << "YES\n";
    }
    else if((a+b*c)==d || (a*b+c)== d){
        cout << "YES\n";
    }
    else if((a*b-c)==d || (a-b*c)== d){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}