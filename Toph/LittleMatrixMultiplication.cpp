#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[2][2],br[2][2],res[2][2];
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            cin >> ar[i][j];
        }
    }
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            cin >> br[i][j];
        }
    }
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            res[i][j] = 0;
            for(int k = 0; k<2; k++){
                res[i][j] += ar[i][k]*br[k][j];
            }
          
        }
    }
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            cout << res[i][j]<< " ";
        }
        cout<<"\n";
    }
}