#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t, n;
    string s;
    cin >> t;
    while(t--)
    {
        int cnt = 0, tmp;
        cin >> n;
        int ar[3];
        for(int i = 0; i<3; i++){
            cin >> ar[i];
        }
        string t = "";
        cin >> s;
        for(int i = 0; i<n; i++){
            if(s[i] == 'R' && ar[1] > 0){
                cnt++;
                ar[1]--;
                t += "P";
            }
            
            else if(s[i] == 'P' && ar[2] > 0){
                cnt++;
                ar[2]--;
                t += "S";
            }
            else if(s[i] == 'S' && ar[0] > 0){
                cnt++;
                ar[0]--;
                t += "R";
            }
            else{
                t+="*";
            }
        }
        for(int i= 0; i<t.size(); i++){
            if(t[i]=='*'){
                if(ar[0] > 0){
                    t[i] = 'R';
                    ar[0]--;
                }
                else if(ar[1] > 0){
                    t[i] = 'P';
                    ar[1]--;
                }
                else{
                    t[i] = 'S';
                    ar[2]--;
                }
            }
        }
        if(n%2!=0){
            tmp = (n/2)+1;
        }
        else{
            tmp = n/2;
        }
        
        
        if(cnt >= tmp){
            cout << "YES\n" << t << endl;
        }
        else{
            cout << "NO\n";
        }
       
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}