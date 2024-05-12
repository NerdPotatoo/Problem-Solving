#include<bits/stdc++.h>
using namespace std;

 

int main()
{
    int a, b;
    cin >> a >> b;
    if(abs(a-b)==1 || (a==b && a != 0 && b != 0) ){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
 
    return 0;
}