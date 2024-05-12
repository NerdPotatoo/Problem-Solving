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
         int n;
         vector<int> v;
         cin >> n;
         int k = 1, cnt = 0;
         while(n!=0)
        {
            int rem = n%10;
            v.push_back(rem);
            n /= 10;
         }
         for(int i = 0; i<v.size(); i++){
            v[i] *= k;
            if(v[i]!=0){
                cnt++;
            }
            k *= 10;
         }
         cout << cnt << "\n";
         for(int i = 0; i<v.size();i++){
            if(v[i]!= 0){
                cout << v[i] << " ";
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

