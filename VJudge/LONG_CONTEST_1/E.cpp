#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin >> t;
    while(t--)
    {
        int n, sum = 0, cnt = 0;
        cin >> n;
        vector<int> v;
        for(int i =0; i<n; i++){
            int a;
            cin >> a;
            v.push_back(a);
            sum += a;
        }
        while(v.size()!= 0 && sum%3 != 0){
            if((sum+1)%3==0){
                sum++;
                cnt++;
            }
            else{
                
                sum -= v[v.size()-1];
                v.pop_back();
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