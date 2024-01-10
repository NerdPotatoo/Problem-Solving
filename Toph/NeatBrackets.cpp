#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int left = 0, right = 0;

    for(int i = 0; i<s.size(); i++){
        if(s[i]=='('){
            left++;
        }
        else if(s[i]==')'){
            right++;
            if(left>0){   
                right--;
                left--;
            }   
        }
        
    }
    if(left == 0 && right == 0){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}