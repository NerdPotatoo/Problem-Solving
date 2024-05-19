#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        long long n,c1,c2;
        cin>>n;
        c2 = ceil(n/3);
        c1 = n-2*c2;
        if(abs(c1-c2) > 1){
            if(c1>c2){
                c1 -= 2;
                c2 += 1;
            }
            else{
                c2 -= 1;
                c1 += 2;
            }
        }
        cout << c1 << " " << c2<<endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}