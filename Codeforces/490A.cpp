#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt[3] = {0, 0, 0}, i = 0, j = 0, k = 0;
    cin >> n;
    int a[n];
    vector<int> v1,v2,v3;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(a[i] == 1) 
        {
            cnt[a[i]-1]++;
            v1.push_back(i);
        }
        if(a[i] == 2) 
        {
            cnt[a[i]-1]++;
            v2.push_back(i);
        }
        if(a[i] == 3) 
        {
            cnt[a[i]-1]++;
            v3.push_back(i);
        }
    }
    int total_team = min(cnt[0],min(cnt[1],cnt[2])), temp;
    temp = total_team;
    cout << total_team << endl;
    for(i = 0; i<total_team; i++)
    {
        cout << v1[i]+1 << " " << v2[i]+1 << " " << v3[i]+1 << endl;
    }
    
}