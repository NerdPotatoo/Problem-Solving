#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin>>s1>>s2;
    int l1, l2, n1, n2;
    l1 = s1.size()-1;
    l2 = s2.size()-1;
    if(s1[l1]%2==0){
        n1 = 0;
    }
    else{
        n1 = 1;
    }
    if(s2[l2]%2==0){
        n2 = 0;
    }
    else{
        n2 = 1;
    }
    if((n1 == 0 && n2 == 0) || (n1 == 1 && n2 == 1)){
        cout<<"Black"<<endl;
    }
    else{
        cout<<"White"<<endl;
    }
}