#include<iostream>
using namespace std;
void print_digit(int n)
{
    if(n==0) return;
    int tmp = n%10;
    print_digit(n/10);
    cout<<tmp<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==0) cout<<0;
        else print_digit(n);
        cout<<'\n';
    }
    
    return 0;
}