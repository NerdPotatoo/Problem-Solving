#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin >> s1 >> s2;
    int i = 0, j = (s1.size()-1);
    bool f = true;
    reverse(s2.begin(), s2.end());
    while(i< s1.size()){
        if(s2[i] != s1[i]){
            f = false;
            break;
        }
        i++;
    }
     
    if(f == true){
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}