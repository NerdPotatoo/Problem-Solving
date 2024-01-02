#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,p,op;
    cin>>x>>p;
    op = (p*1.0)/(1-(x*1.0/100));
    printf("%.2lf\n",op);
}