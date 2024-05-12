#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, e = 2, sum_e = 0, o = 1, sum_o = 0;
        cin >> n;
        vector<int> v;
        for(int i = 1; i<=n; i++){
            if(i <= n/2) {
                sum_e += e;
                v.push_back(e);
                e += 2;
            }
            else{
                sum_o += o;
                v.push_back(o);
                o += 2;
            }
        }
        //cout << sum_e << " " << sum_o << endl;
        while(sum_o<sum_e){
            sum_o += 2;
            v[v.size()-1] += 2;
        }
        if(sum_o == sum_e){
            cout << "YES\n";
            for(auto x : v){
                cout << x << " ";
            }
            cout << "\n";
        }
        else {
            cout << "NO\n";
        }
    }
}