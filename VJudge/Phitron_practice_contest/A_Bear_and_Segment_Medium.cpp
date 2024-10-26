#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >> s;
        int i = 0, j = s.size()-1;
        while(i<s.size()){
            if(s[i] == '1') break;
            i++;
        }
        while(j>0){
            if(s[j] == '1') break;
            j--;
        }
        if(i<j) {
            bool found = false;
            while(i<=j)
            {
                if(s[i]== '0'){
                    found = true;
                    break;
                }
                i++;
            }    
            if(found) cout<< "NO\n";
            else cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}