#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k = 1;
        string s;
        cin >> n >> s;
        int c_i = 0, c_m = 0, c_r = 0, c_T = 0, c_u = 0;
        if(n==5){
            for(int i = 0; i < 5; i++){

                if(s[i] == 'i'){
                    c_i++;
                }
                else if(s[i] == 'm'){
                    c_m++;
                }
                else if(s[i] == 'T'){
                    c_T++;
                }
                else if(s[i] == 'r'){
                    c_r++;
                }
                else if(s[i] == 'u'){
                    c_u++;
                }
                if(s[i] != 'i' && s[i] != 'm' && s[i] != 'r' && s[i] != 'T' && s[i] != 'u'){
                    k = 0;
                    break;
                }
            }
            if(k==1 && c_i == 1 && c_r == 1 && c_m == 1 && c_T == 1 && c_u == 1){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
        else{
            cout << "NO\n";
        }
    }
}