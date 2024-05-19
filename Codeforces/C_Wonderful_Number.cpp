#include<bits/stdc++.h>
using namespace std;
#define ll long long

void palindrom(vector<int> v){
    int i = 0, k= 1, j= v.size()-1;
    while(i<j)
    {
        if(v[i]!=v[j]){
            k = 0;
            break;
        }
        i++; j--;
    }
    if(k) cout<<"YES\n";
    else cout<<"NO\n";
}
void OddEven(int n, vector<int>& v)
{
    
    if(n%2==0){
        cout<<"NO\n";
    }
    else{
        while(n>0){ 
            v.push_back(n%2);
            n/=2;
        }
        
        palindrom(v);
    }
}
void solve()
{
    // CODE HERE
    vector<int> v;
    int n; cin>>n;
    OddEven(n, v);
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}