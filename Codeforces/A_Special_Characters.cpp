#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        bool f = true;
        if(n%2 == 1) f = false;
        if(f) cout << "YES\n";
        else cout << "NO\n";
        while(n-- && f==true){
            if(n%2==0){
                cout<<"AB";
            }
            else{
                cout<<"A";
            }
        }
        cout << "\n";
    }
    return 0;
}

