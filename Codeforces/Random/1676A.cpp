#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string a, temp;
        cin>>a;
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i<a.size(); i++){
            if(i<3){
                sum1 += a[i] - 48;
            }
            else {
                sum2 += a[i] - 48;
            }
        }
        if(sum1 == sum2){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}