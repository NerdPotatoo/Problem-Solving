#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int r,c;
    cin >> r >> c;
    int s = 1;
    for(int i = 1; i<=r; i++)
    {
        if(i%2==0)
        {
            for(int j = 1; j <= c; j++)
            {
                if(s%2 != 0 && j == c){
                    cout << "#";
                }
                else if(s%2 ==0 && j == 1){
                    cout << "#";
                }
                else{
                    cout << ".";
                }
            }
            s++;
        }
        else{
            for(int j = 1; j <= c; j++)
            {
                cout << "#";
            }
        }
        cout << "\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

