#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char arr[9];
    while(t--){
        int a=0, b=0, c=0;
       for(int i = 0 ; i<9; i++){
        cin>>arr[i];
       }
       for(int i = 0 ; i<9; i++){
        if(arr[i]=='A'){
            a++;
        }
        else if(arr[i]=='B'){
            b++;
        }
        else if(arr[i]=='C'){
            c++;
        }
       }
       if(a==2) cout << "A"<<endl;
       else if(b==2) cout << "B"<<endl;
       else if(c==2) cout << "C"<<endl;
    
    }
}