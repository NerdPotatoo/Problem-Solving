#include<bits/stdc++.h>
using namespace std;
int a[27];
int main(){
    int cnt = 0;
    string s;
    getline(cin, s);
    int len = s.size();
    for(int i = 1; i<len-1; i++){
        if(s[i] >= 97 && s[i] <= 122){
            a[s[i]-96]++;
        }
    }
    for(int i = 0; i < 27; ++i){
        if(a[i]>0){
            cnt++;
        }
    }
    cout << cnt;
}