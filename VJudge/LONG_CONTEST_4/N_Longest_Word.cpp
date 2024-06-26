#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int mx = 0;
    string s,mx_word;
    while(cin>>s)
    {
        if(s=="E-N-D"){
            break;
        }
        vector<char> tmp;
        for(char x:s)
        {
            if((x>='a' && x<='z') || (x>='A' && x<='Z') || x=='-'){
                tmp.push_back(x);
            }
            else{
                string st(tmp.begin(),tmp.end());
                if(st.size()>mx){
                    mx_word = st;
                    mx = mx_word.size();
                }
                tmp.clear();
            }
        }

        string st(tmp.begin(),tmp.end());
        if(st.size()>mx){
            mx_word = st;
            mx = mx_word.size();
        }
    }
    transform(mx_word.begin(),mx_word.end(),mx_word.begin(), ::tolower);
    cout<<mx_word<<endl;
    return 0;
}