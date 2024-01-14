#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    int i = 1;
    while(t--){
        int A, B, C;
        cin >> A >> B >> C;
        if((A > B) && (A > C)){
            cout << "Case " << i <<": "<< 'A' << "\n";
        }
        else if((B > A) && (B > C)){
            
            cout << "Case " << i <<": "<< 'B' << "\n";
        } 
        else if((C > A) && (C > B)){
            
            cout << "Case " << i <<": "<< 'C' << "\n";
        }
        else{
            
            cout << "Case " << i <<": Confused\n";
        }
        i++;
    }
}