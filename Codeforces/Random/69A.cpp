#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int n, sumX = 0, sumY = 0, sumZ = 0;
    cin >> n;
    int a[n][3];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
            if(j==0){
                sumX += a[i][j];
            }
            else if(j==1){
                sumY += a[i][j];
            }
            else if(j==2){
                sumZ += a[i][j];
            }
        }
    }
    if(sumX == 0 && sumY == 0 && sumZ == 0){
        cout << "YES\n";
    }
    else {
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

