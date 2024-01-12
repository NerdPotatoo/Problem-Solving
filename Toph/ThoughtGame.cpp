#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y;
    cin >> t;
    while(t--){
        cin >> x >> y;
        int avg = (x + y)/2;
        if(avg%2==0){
            cout << "Sadia will be happy." << "\n";
        }
        else{
            cout << "Oops!" << "\n";
        }
    }
}