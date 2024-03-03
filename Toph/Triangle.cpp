#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int tc;
    cin >> tc;
    while(tc--){
        int a, b, c;
        cin >> a >> b >> c;

        if( a + b < c || a + c < b || b + c < a){
            cout << "Oh, No!\n";
        } 
        else{
            float s = (a + b + c)/2.0;
            float area = sqrt(s*(s - a)*(s - b)*(s - c));
            cout << fixed << setprecision(2) << area << "\n";
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