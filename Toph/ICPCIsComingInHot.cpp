#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int num;
    for(int i = 0; i<s.size(); i++){
        bool flag = false;
       for(int j =i+1; j<s.size(); j++){
        if(s[i]==s[j]){
            num = s[i];
            flag = true;
            break;
        }
       }
       if(flag==true){
        break;
       }
    }
    num -= 48;
    cout<<num<<endl;  
}