#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt[26] = {0};
    string s;
    cin >> s;
    for(int i = 0; i<s.size(); i++){
        cnt[s[i]-'a']++;
    }
    for(int i = 0; i<26;i++){
        if(cnt[i] != 0) cout << char(i+'a') << " : " << cnt[i] << endl;
    }
}