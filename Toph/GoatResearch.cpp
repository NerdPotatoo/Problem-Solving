#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, mx = 0;
    string s;
    cin>>n;
    cin.ignore();
    int count[n];
    for(int i= 0; i<n; i++){
        count[i]=0;
    }
    for(int i = 0; i<n; i++){
        cin>>s;
        for(int j = 0; j<s.size(); j++){
            if(s[j]=='a'){
                count[i]++;
            }
        }
    }
    for(int i = 0; i<n; i++){
        if(count[i]%2 != 0 && count[i]>1){
            count[i]--; 
        }
        else if(count[i]==1){
            count[i]++;
        }
    }
    // maximum 
    for(int i = 0; i<n; i++){
        mx = max(mx, count[i]);
    }
    // pattern printing 
    for(int i = 0; i<n; i++){
        int space = (mx-count[i])/2;
        for(int j = 1; j<=space; j++){
            cout<<" ";
        }

        cout<<'b';
        for(int k = 0; k<count[i]; k++){
            cout<<'a';
        }
        cout<<endl;
    }
}