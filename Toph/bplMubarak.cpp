#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        int i, cnt = 0, over, ball;
        cin>>s;
        for(i = 0; i<s.size(); i++){
            if(s[i]=='W' || s[i]=='N' || s[i]=='D' || s[i]=='w' || s[i]=='n' || s[i]=='d'){
                continue;
            }
            else{
                cnt++;
            }
        }
        over = cnt/6;
        ball = cnt%6;

        if(over==1 && ball ==1){
            cout<<over<<" OVER "<<ball<<" BALL"<<endl;
        }
        else if(over>1 && ball>1){
            cout<<over<<" OVERS "<<ball<<" BALLS"<<endl;
        }
        else if(over>1 && ball==1){
            cout<<over<<" OVERS "<<ball<<" BALL"<<endl;
        }
        else if(over==1 && ball>1){
            cout<<over<<" OVER "<<ball<<" BALLS"<<endl;
        }
        else if(over<1 && ball>=1){
            if(ball == 1){
                cout<<ball<<" BALL"<<endl;
            }
            else{
                cout<<ball<<" BALLS"<<endl;
            }
        }
        else if(over>=1 && ball<1){
            if(over == 1){
                cout<<over<<" OVER"<<endl;
            }
            else{
                cout<<over<<" OVERS"<<endl;
            }
        }
    }
}
