#include<bits/stdc++.h>
using namespace std;

int main() {
    double percent;
    string bar = "[..........]";
    cin>>percent;
    int x = floor(percent/10);
    for(int i =1; i<=x; i++){
        bar[i] = '+';
    }
    cout<<bar<<" "<<(int)percent<<"%";
}
