#include<bits/stdc++.h>
using namespace std;

int main()
{
    string A,B;
    cin>>A;
    for(int i = 0; i<A.length(); i++){
        if(A[0]>='a' && A[0]<='z'){
            B[0] = A[0]-32;
        }
        if(A[i]=='s'){
            B.push_back('$');
        }
        else if(A[i]=='i'){
            B.push_back('!');
        }
        else if(A[i]=='o'){
            B.push_back('(');
            B.push_back(')');
        }
        else{
            B.push_back(A[i]);
        }
        
    }
    B.append(".");
        cout<<B;
}