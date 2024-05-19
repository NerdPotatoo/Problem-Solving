#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int locs, suns, moons, bridges, u,v;
    bool f = true;
    cin>>locs>>suns;
    vector<vector<int>> mat(locs,vector<int>(locs,0));
    vector<int> sun(suns);
    for(int i = 0; i<suns; i++){
        cin>>sun[i];
    }
    cin>>moons;
    vector<int> moon(moons);
    for(int i = 0; i<moons; i++){
        cin>>moon[i];
    }
    cin>>bridges;
    while(bridges--){
        cin>>u>>v;
        u--;v--;
        mat[u][v] = 1; 
    }
    // for(int i = 0; i<locs; i++){
    //     for(int j = 0; j<locs; j++){
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<'\n';
    // }
    for(int i = 0; i<suns-1; i++){
        for(int j = i+1; j<suns; j++){
            int x = sun[i], y = sun[j];
            x--;y--;
            if(mat[x][y] == 1){
                f = false;
                break;
            }
        }
    }
    for(int i = 0; i<moons-1; i++){
        for(int j = i+1; j<moons; j++){
            int x = moon[i], y = moon[j];
            x--;y--;
            if(mat[x][y] == 1){
                f = false;
                break;
            }
        }
    }
    if(f) cout<<"YES\n";
    else cout<<"NO\n";

}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}