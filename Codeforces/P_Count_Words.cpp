#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    string s;
    getline(cin,s);
    for(int i =0; i<s.size(); i++)
    {
        if(s[i]=='.'||s[i]=='?'||s[i]==','||s[i]=='!'){
            s[i] =' ';
        }
    }
    stringstream ss(s);
    string word;
    while(ss>>word){
        cnt++;
        //cout<<word<<endl;
    }
    cout<<cnt;
    return 0;
}