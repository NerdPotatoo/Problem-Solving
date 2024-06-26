#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve()
{
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        int n, i = 0;
        cin>>n;
        vector<int> v, idx, idxN;
        while(pow(2,i)<=n){
            v.push_back(pow(2,i));
            i++;
        }
        v.push_back(pow(2,i));
        int tmp = v[v.size()-1];
        int last;
        for(int i = v.size()-1; i>0; i--)
        {
            int tmp = v[i];
            for(int j = i-2; j>=0; j-=2){
                if(tmp+v[j] <= n){
                    tmp+=v[j];
                    idx.push_back(j);
                }
                if(tmp-v[j] <= n){
                    tmp-=v[j];
                    idxN.push_back(j);
                }
                if(tmp==n) {
                 last = i;
                    break;
                }
            }
            if(tmp ==n)break;
        }
        cout<<last<<endl;
        for(int i = 0; i<idx.size(); i++){
            cout<<idx[i]<<" ";
        }
        cout<<endl;
        for(int i = 0; i<idxN.size(); i++){
            cout<<idxN[i]<<" ";
        }
        cout<<endl;
        //cout<<v.size()<<"\n";
        for(int i = 0; i<v.size(); ++i){
            cout<<v[i]<<" ";
        }
        cout<<"--------------\n";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}