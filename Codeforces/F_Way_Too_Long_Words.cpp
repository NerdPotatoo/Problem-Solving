#include<bits/stdc++.h>
using namespace std;
#define ll long long

 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s.size()>10){
            cout << s[0] << s.size()-2 << s[s.size()-1]<< endl;
        }
        else{
            cout << s << endl;
        }
    }
    return 0;
}