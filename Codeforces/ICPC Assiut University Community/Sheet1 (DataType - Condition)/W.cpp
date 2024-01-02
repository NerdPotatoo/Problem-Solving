#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,c;
    char s,q;
    cin>>x>>s>>y>>q>>c;
    if(s=='+'){
        if(c==(x+y)) cout<<"Yes"<<endl;
        else cout<<x+y<<endl;
    }
    else if(s == '*'){
       if(c==(x*y)) cout<<"Yes"<<endl;
        else cout<<x*y<<endl;
    }
    else if(s == '-'){
        if(c==(x-y)) cout<<"Yes"<<endl;
        else cout<<x-y<<endl;
    }
}