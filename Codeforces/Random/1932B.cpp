#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int tc;
    cin >> tc;
    while(tc--){
        int n, year;
        cin >> n;
        int a[n];
        for(int i = 0; i< n; i++){
            cin >> a[i];
        }
        year = a[0];
        for(int i = 1; i < n; i++){
            if(year > a[i]){
                year++;
            }
            else if(year <= a[i]){
                year += a[i];
            }


        }
        cout << year << "\n";
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}