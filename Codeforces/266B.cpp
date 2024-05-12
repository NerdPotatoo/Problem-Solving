#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int n, k,temp,j;
    cin >> n >> k;
    string s;
    cin >> s;
    while(k--){
        for(int i = 0; i < n-1; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
        cout << s;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}
 