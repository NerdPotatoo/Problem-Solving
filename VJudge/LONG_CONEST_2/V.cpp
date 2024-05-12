#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t, i = 1;
    cin >> t;
    while(t--)
    {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int m;
        cin >> m;
        cout << "Case "<<i<<":\n";
        while(m--){
            int x, y;
            cin >> x >> y;
            if((x >= x1 && x <= x2) && (y>=y1 && y<=y2)){
                cout << "Yes\n";
            }
            else{
                cout <<"No\n";
            }
        }
        i++;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}