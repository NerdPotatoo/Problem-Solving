#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y;
    char op;
    cin>>x>>op>>y;
    if(op=='+'){
        cout<<x+y<<endl;
    } 
    else if(op == '*'){
        cout<<x*y<<endl;
    }
    else if(op == '-'){
        cout<<x-y<<endl;
    }
    else if(op == '/'){
        cout<<x/y<<endl;
    }
}