#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    cin.ignore();
    cin>>s;
    int cnt_A = 0, cnt_D = 0;
    for(int i =0; i<s.size(); i++){
        if(s[i]=='A'){
            cnt_A++;
        }
        else{
            cnt_D++;
        }
    }

    if(cnt_A > cnt_D){
        cout<<"Anton"<<endl;
    }
    else if(cnt_D > cnt_A){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
}