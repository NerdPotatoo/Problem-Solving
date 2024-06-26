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
    for(int i = 1; i<=t; i ++)
    {
        string s1,s2, m1,m2;
        cin>>s1>>s2;
        int d1,d2,y1,y2,start;
        bool flag = false;

        sscanf(s1.c_str(),"%s %d, %d",&m1,&d1,&y1);
        sscanf(s2.c_str(),"%s %d, %d",&m2,&d2,&y2);
        
        if(m1 == "January" || m1 == "Fabruary" || (m1 == "Fabruary" && d1==29) ){
            if(y1%4==0 && y1%100!=0 || y1%400== 0){
                start = y1;
                flag = true;
                
            }
        }
        else{
            while(!(y1%4==0 && y1%100!=0 || y1%400== 0)){
                y1++;
            }
            start = y1;
            flag = true;
        }
        int ans = 0,j;
        if(flag){
            for(j = start; j<=y2; j+=4)
            {
                ans++;
            }
        }
        if((j%4==0 && j%100!=0 || j%400== 0)){
            if(m2== "January" || (m2=="Fabruary"&& d2<29)){
                ans--;
            }
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }

    return 0;
}