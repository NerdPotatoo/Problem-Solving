#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,first_digit, second_digit;
    cin>>n;
    second_digit = n%10;
    first_digit = n/10;
    if(n%10==0){
        cout<<"YES"<<endl;
    }
    else if(first_digit%second_digit ==0|| second_digit%first_digit == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}