#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc; 
    cin >> tc;
    while (tc--){
        long long N, hp, elixir, amu, kills = 0;
        cin >> N >> hp >> elixir >> amu;
        long long M_hp[N];
        for(long long i = 0; i < N; ++i){
            cin >> M_hp[i];
        }
        // hp += elixir;
        for(long long i = 0; i < N; ++i){
            if(hp >= M_hp[i]){
                if(amu>0){
                    if(M_hp[i] > M_hp[i+1]){
                        amu--;
                        kills++;
                    }
                }
                else{
                    hp -= M_hp[i];
                    kills++;
                }
                
            }
            else {
                if(amu>0){
                    if(M_hp[i] > M_hp[i+1]){
                        amu--;
                        kills++;
                    }
                }
                else{
                    elixir -= (M_hp[i] - hp);
                    hp += elixir;
                    hp -= M_hp[i];
                    kills++; 
                }
            }
        }
        cout << kills << "\n";
        
    }
}