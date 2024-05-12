#include<bits/stdc++.h>
using namespace std;
#define ll long long
 

 
int main()
{
    string a,b,c;
    cin >> a >> b;
    c = a+b;
    cout << a.size() << " " << b.size() << "\n" << c << "\n";
    swap(a[0],b[0]);
    cout << a << " "<< b ;
    return 0;
}