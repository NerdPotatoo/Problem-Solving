#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    int mx =INT_MIN, mx_idx, mn = INT_MAX, mn_idx;

    for(int i = 0; i<n; i++)
    {
        if(mx<a[i]){
            mx = a[i];
            mx_idx = i;
        }
        if(mn>a[i]){
            mn = a[i];
            mn_idx = i;
        }
    }
    swap(a[mx_idx], a[mn_idx]);
    for(int i = 0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}