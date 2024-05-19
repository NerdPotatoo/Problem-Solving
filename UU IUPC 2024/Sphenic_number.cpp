#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<bool> isPrime(1000, 1);

void solve()
{
    // CODE HERE
    vector<int> primes;
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i<1000; i++)
    {
        if(isPrime[i]){
            for(int j = 2*i; j<1000; j+=i){
                isPrime[j] = false;
            }
        }
    }
    for(int i = 0; i<1000; i++){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }
    // for(int x:primes){
    //     cout<<x<<" ";
    // }
    int n, ans = 0;
    cin>>n;
    for(int i = 0; i<(int)primes.size()-2; i++){
        for(int j = i+1; j<(int)primes.size()-1; j++){
            for(int k = j+1; k<(int)primes.size(); k++){
                if(primes[i]*primes[j]*primes[k]<=n) ans++;
            }
        }
    }
    cout<<ans;
    
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}