#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, temp,ans;
    cin >> s;
    for(auto& x : s){
        x = tolower(x);
    }
    for(int i = 0; i<s.size(); i++){
        if(s[i] == 'a' || s[i] =='e' || s[i] == 'i' || s[i] == 'o' || s[i] =='u' || s[i] == 'y'){
            continue;
        }
        else{
            ans += '.';
            ans += s[i];
        }
    }
    cout << ans;
    
}