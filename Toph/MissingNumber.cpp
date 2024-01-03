#include<bits/stdc++.h>
using namespace std;

int main(){
    int sumOfFour,sum=0;
    int arr[3];
    cin>>sumOfFour;
    
    for(int i =0; i<3; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<3;i++){
        sum += arr[i];
    }
    int missing_num = sumOfFour-sum;
    cout<<missing_num<<endl;
}