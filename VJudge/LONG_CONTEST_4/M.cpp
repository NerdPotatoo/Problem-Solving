
#include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define end '\n'
    #define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     
    int32_t main()
    {
        fastIO;
        // CODE HERE
        int t;
        cin>>t;
        for(int i = 1; i<=t; i++)
        {
            ll n;
            cin >> n;
            ll parity = __builtin_popcountll(n);
            if(parity%2==1){
                cout<<"Case "<<i<<": odd\n";
            }
            else{
                cout<<"Case "<<i<<": even\n";
            }
        }
    
        return 0;
    }