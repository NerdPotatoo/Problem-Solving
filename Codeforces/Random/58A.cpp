#include<bits/stdc++.h>
using namespace std;
int a[4];
int main(){
    string s;
    cin >> s;
    int idx_h, idx_e, idx_l, cnt = 0, cntl =0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'h'){
            cnt++;
            idx_h = i;
            break;
        }
        else{
            idx_h = 0;
        }
    }
    for(int i = idx_h + 1; i<s.size(); i++){
        if(s[i] == 'e'){
            cnt++;
            idx_e = i;
            break;
        }
        else{
            idx_e = idx_h;
        }
    }
    for(int i = idx_e + 1; i<s.size(); i++){
        if(s[i] == 'l'){
            cnt++;
            cntl++;
            idx_l = i;
            if(cntl == 2){
                break;
            }
        }
        else{
            idx_l = idx_e;
        }
    }
    for(int i = idx_l + 1; i<s.size(); i++){
        if(s[i] == 'o'){
            cnt++;
            break;
        }
    }
    if(cnt == 5){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}