#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> v,x;
    
    int a;
    for(int i = 0; i<(n+m); i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int len = v.size();
   
    for(int i = 0; i<len; i++){
            if(v[i]==v[i+1] ){
                continue;
            }
            x.push_back(v[i]);
    }
    sort(x.begin(),x.end());
    for(int i = 0; i<x.size(); i++){
        if(i == x.size()-1){
            cout << x[i];
        }
        else{
            cout << x[i] << " ";
        }
    }
}