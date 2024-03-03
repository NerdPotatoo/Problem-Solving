#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int tc;
    cin >> tc;
    while(tc--)
    {
        int rating;
        cin >> rating;
        if(rating<1400){
            cout << "Division 4\n";
        }
        else if(rating>= 1400 && rating <1600){
            cout << "Division 3\n";
        }
        else if(rating >=1600 && rating <1900){
            cout << "Division 2\n";
        }
        else if(rating >= 1900){
            cout << "Division 1\n";
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

