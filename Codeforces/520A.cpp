#include<bits/stdc++.h>
using namespace std;
int a[27];
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i<s.size(); ++i){
        if(s[i]>='A' &&  s[i]<='Z'){
            s[i] += 32;
        }
        a[s[i]-96]++;
    }
    sort(a,a+27);
    if(a[1]>0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
}