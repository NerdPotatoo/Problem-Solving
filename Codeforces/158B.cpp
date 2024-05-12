#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int n,G1 = 0, G2 = 0, G3 = 0, G4 = 0;
    cin >> n;
    int a[n];
    for(int i = 0;i< n; i++){
        cin >> a[i];

        if(a[i] == 4 ){
            G4++;
        }
        else if(a[i]==3){
            G3++;
        }
        else if(a[i]==2){
            G2++;
        }
        else{
            G1++;
        }
    }
    if(G3>=G1){
        G4 += G3;
        G1 = 0;
    }
    else if(G3<G1){
        G4 += G3;
        G1 -= G3;
        G3 = 0;
    }
    //cout << G4 << endl;
    if((G2*2)%4==0){
        G2 = (G2*2)/4;
        G4 += G2;
    }
    else{
        G2 = (G2*2)/4 + 1;
        G4 += G2;
        G1 -= 2;
    }
   // cout << G4 << endl;
   if(G1>0){
     if(G1%4==0 ){
        G1 = G1/4;
        G4+= G1;
    }
    else{
         G1 = (G1/4)+1;
        G4+= G1;
    }
   }
    cout << G4 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

