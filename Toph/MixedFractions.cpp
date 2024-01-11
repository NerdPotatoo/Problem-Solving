#include<bits/stdc++.h>
using namespace std;
int main(){
    int numerator,denominator;
    cin >> numerator >> denominator;
    int x,y;
    x = numerator/denominator;
    y = numerator - (x * denominator);
    cout << x << " " << y << " " << denominator;
}