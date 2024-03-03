#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int n, odd = 0, even = 0, idxO, idxE;
    cin >> n;
    int a[n];
    for(int i = 0; i< n; i++)
    {

        cin >> a[i];
        if(a[i]%2== 0){
            even++;
            idxE = i;
        }
        else{
            odd++;
            idxO = i;
        }
    }
    if(even == 1){
        cout << idxE+1;
    }
    else{
        cout << idxO +1;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

