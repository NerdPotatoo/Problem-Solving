#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i]==','){
            s[i] = ' ';
        }
        else if(s[i]>='a' && s[i]<='z'){
            s[i] -= 32;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            s[i] += 32;
        }
    }
    cout << s;
    return 0;
}