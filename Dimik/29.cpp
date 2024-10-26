#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    getchar();
    while(T--)
    {
        char ch;
        cin>>ch;
        if(ch>= 'a' && ch<= 'z')
        {
            cout<<"Lowercase Character";
        }
        else if (ch>= 'A' && ch<='Z')
        {
            cout<<"Uppercase Character";
        }
        else if(ch>='0' && ch<='9')
        {
            cout<<"Numerical Digit";
        }
        else
        {
            cout<<"Special Characters";
        }
        if(T!=0){
            cout<<endl;
        }
    }
    return 0;
}
