#include<iostream>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    int cnt = 0;
    if (B==1) {
        cout << 0;
        return 0;
    }
    B -= A;
    cnt++;
    while(B>0){
        B -= A-1;
        cnt++;
    }
    cout << cnt;
}