#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>>x;
    if(x>=65 && x<=90){
        cout<<(char)(x|96)<<endl;
    }
    else if(x>=97 && x<=122){
        cout<<(char)(x&95)<<endl;
    }
}