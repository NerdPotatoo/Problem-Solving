#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, ans ="";
    cin >> s;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B' && i<s.size()-2){
            i += 2;
        }
        else{
            ans += s[i];
            if(s[i+1] == 'W' && s[i+2] == 'U' && s[i+3] == 'B' && i<s.size()-1){
                ans += " ";
            }
        }
       
    }
    cout << ans; 
}