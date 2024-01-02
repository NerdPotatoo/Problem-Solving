#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, a=0, b=0, c=0, d=0, e=0, f=0;
    cin>>n;

    f = n/500;
    n %= 500;

    e = n/100;
    n %= 100;

    d = n/50;
    n %=50;

    c = n/10;
    n %= 10;

    b = n/5;
    n %= 5;

    a = n/1;
    n = n%1;

    vector<int> v;

    for(i = 0; i<a; i++ ){
        v.push_back(1);
    }
    for(i = 0; i<b; i++ ){
        v.push_back(5);
    }
    for(i = 0; i<c; i++ ){
        v.push_back(10);
    }
    for(i = 0; i<d; i++ ){
        v.push_back(50);
    }
    for(i = 0; i<e; i++ ){
        v.push_back(100);
    }
    for(i = 0; i<f; i++ ){
        v.push_back(500);
    }
    sort(v.begin(), v.end());

    for(i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}