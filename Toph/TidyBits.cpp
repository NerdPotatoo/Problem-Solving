#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    vector<int> v;
    while(num!=0){
        int a = num%2;
        if(a == 1){
            v.push_back(a);
        }
        num /= 2;
    }
    int sum = 0;
    for(int i = 0; i<v.size(); i++){
        sum += pow(2,i);
    }
    cout << sum;
}