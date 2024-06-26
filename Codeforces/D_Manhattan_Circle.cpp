#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        int n,m, mx_row = 0, row, cal, mx = 0;
        char ch;
        cin>>n>>m;
        vector<int> cnt_cal(m);
        for(int i = 0; i<n; i++)
        {
            int cnt_h = 0;
            for(int j = 0; j<m; j++)
            {
                cin>>ch;
                if(ch=='#')
                {
                    cnt_h++;
                    cnt_cal[j]++;
                }
            }
            if(cnt_h>mx_row)
            {
                row = i;
                mx_row = cnt_h;
            }
        }
        row++;
        for(int i = 0; i<m; i++)
        {
            if(cnt_cal[i]>mx){
                mx = cnt_cal[i];
                cal = i;
            }
        }
        cal++;
        cout<<row<<" "<<cal<<"\n";

    }

    return 0;
}