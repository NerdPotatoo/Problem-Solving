#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i =0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    int cnt_1 = 0, cnt_2 = 0;
    for(int i =0; i < n; i++){
        if(a[i]>b[i]){
            cnt_1++;
        }
        else if(a[i]<b[i]){
            cnt_2++;
        }
    }
    if(cnt_1 > cnt_2){
        cout << "Takahashi";
    }
    else if(cnt_1 < cnt_2){
        cout << "Aoki";
    }
    else{
        cout << "Draw";
    }
}