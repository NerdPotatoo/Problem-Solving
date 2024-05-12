#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x, y, cnt = 0;
    cin>>n>>x;
    int a;
    vector<int> v;
    for(int i = 0; i<x; i++){
        cin>>a;
        v.push_back(a);
    }
    cin>>y;
    for(int i = 0; i<y; i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    for(int i = 0; i<v.size(); i++){
        if(v[i]==v[i+1]){
            continue;
        }    
        cnt++;
    }
    
    if(cnt == n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
}