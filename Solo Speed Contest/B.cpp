#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k , cnt = 0;
        cin >> n >> k;
        cin.ignore();
        string s;
        cin>>s;
        bool flag = false;
        for(int i = 0; i < n; i++){
            if(s[i]=='*'){ // *a*b*
                cnt++;
                if(cnt==k){
                    flag = true;
                    break;
                }
            }
            else{
                cnt = 0;
            }
        } 
        if(flag==true) cout << "YES" << endl;
        else cout << "NO" << endl;


    }
}