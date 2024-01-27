#include<bits/stdc++.h>
using namespace std;
int check(string s){
    int cnt = 0;
    for(int i = 0; i<s.size()-1; ++i){
        if(s[i] == s[i+1]){
            cnt++;
            if(cnt == 6){
                return cnt;
            }
        }
        else{
            cnt = 0;
        }
    }
    return cnt;
}
int main(){
    string s;
    cin >> s;
    int cnt = check(s);
    if(cnt==6){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}