#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n1,n2,a,b;
    cin>>n1>>n2;
    bool flag = false;
    while(n1 !=0 && n2 != 0)
    {
        a = n1%10;
        b = n2%10;
        if((a+b)>9){
            flag = true;
            break;
        }
        n1 /= 10;
        n2 /= 10;
    }
    if(flag)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}