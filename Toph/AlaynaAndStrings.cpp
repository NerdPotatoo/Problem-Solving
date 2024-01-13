#include<bits/stdc++.h>
using namespace std;
int main(){
    int cnt_big = 0, cnt_small = 0;
    string s;
    cin >> s;
    for(int i = 0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            cnt_big++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            cnt_small++;
        }
    }
    cout << cnt_big << " " << cnt_small;
}