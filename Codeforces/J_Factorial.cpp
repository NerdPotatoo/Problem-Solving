#include<iostream>
using namespace std;
long long int fact(long long int n)
{
   if(n==1) return 1;
   else return n*fact(n-1);
}
int main()
{
    long long int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}