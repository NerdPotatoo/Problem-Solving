#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n1, n2; 
    cin >> n1 >> n2;
    long long prod = n1 * n2;
    vector<int> v;

    while(prod != 0){
        v.push_back(prod % 10);
        prod /= 10;
    }

    reverse(v.begin(), v.end());
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] + 1;
    }
}