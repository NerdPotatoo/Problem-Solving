#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss<<s;
    string word;
    vector<string> v;
    while(ss>>word){
        reverse(word.begin(), word.end());
        v.push_back(word);
    }
    for(int i = 0; i<v.size(); i++)
    {
        if(i==v.size()-1){
            cout<<v[i];
        }
        else{
            cout<<v[i]<<" ";
        }
    }
    return 0;
}