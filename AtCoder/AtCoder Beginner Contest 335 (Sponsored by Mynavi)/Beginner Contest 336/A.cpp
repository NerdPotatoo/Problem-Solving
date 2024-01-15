#include<bits/stdc++.h>
using namespace std;
int main(){
    
    
    int n;
    cin >> n;
    cin.ignore();
    char s2[n+3];
    s2[0] = 'L';
    for(int i = 1; i <= n ; i++){
       s2[i] = 'o';
    }
    s2[n+1] = 'n';
    s2[n+2] = 'g';
    for(int i =0; i<(n+3);i++){
        cout<<s2[i];
    }
    /*
    this could be an approach better than before
    
    int n;
    cin >> n;
    cin.ignore();
    string s = "L";
    for(int i = 1; i <= n ; i++){
       s += "o";
    }
    s += "ng";
    cout << s;
   */
}