#include<iostream>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    int cnt = 0, temp = 0;
    // for(int i = 1; B>A; i++){
    //     cnt = i;
    //     temp +=  A;
    // }
    while(temp<B){
        temp += A;
        cnt++;
    }
    if(B<A){
        cout << 0;
    }
    else{
        cout << cnt;
    }

}
