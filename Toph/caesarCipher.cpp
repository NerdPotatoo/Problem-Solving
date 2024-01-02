#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    cin>> n;
    cin.ignore();
    getline (cin, str);

   for(int i = 0; i<str.size(); i++){
        if(str[i]==' ') {
            continue;
        }
        if(str[i]>='a' && str[i]<='z'){
            str[i] -= n;
        }
        if(str[i] < 'a'){
            str[i] += 26;
        } 
   }
    cout<<str;
}