#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], mn, idx;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(i == 0) 
        {
            mn = a[i];
            idx = i;
        }
        if(mn > a[i]){
            mn = a[i];
            idx = i;
        } 
    }
    cout << mn << " " << idx+1;
}