#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a, one = 0, two = 0, sum = 0;
        for(int i = 0; i<n;i++){
            cin>>a;
            sum += a;
            if(a==1) one++;
            else two++;
        }
    
        if(sum%2==1){
             cout<<"NO\n";
        }
        else{
           
            sum = sum/2;
            if(sum%2==0 || (sum%2==1 && one>0)){
                cout<< "YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}