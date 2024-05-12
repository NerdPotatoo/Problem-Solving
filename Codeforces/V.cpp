#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    char op;
    cin>>x>>op>>y;
    if(op=='='){
        if(x==y) cout<<"Right"<<endl;
        else cout<<"Wrong"<<endl;
    }
    else if(op == '<'){
        if(x<y) cout<<"Right"<<endl;
        else cout<<"Wrong"<<endl;
    }
    else if(op == '>'){
        if(x>y) cout<<"Right"<<endl;
        else cout<<"Wrong"<<endl;
    }
}