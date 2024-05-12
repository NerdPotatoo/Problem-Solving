#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i<n; i++){
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        int midx = n/2, cnt = 0;
        if(n%2==0) midx--;
        for(int i = midx; i<n; i++){
            if(v[midx] == v[i]){
                cnt++;
            }
        }
        cout << cnt << endl;
        
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}