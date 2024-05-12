/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a[26] = {0};
        int n;
        cin >> n;
        int trac[n];
        for(int i = 0; i<n; i++)
        {
            cin >> trac[i];
        }
        string s = "";
        for(int i = 0; i<n; i++){
           int j = a[trac[i]];
           a[trac[i]]++;
           s += (char)('a'+j);
        }
        cout << s << endl;
    }

}
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i<n; i++) cin >> v[i];

        map<char,int> mp;
        for(char a = 'a'; a<= 'z'; a++){
            mp[a] = 0;
        }

        for(int i = 0; i<n; i++){
            for(char a = 'a'; a<= 'z'; a++){
                if(mp[a] == v[i]){
                    cout << a;
                    mp[a]++;
                    break;
                }
            }
        }
        cout << endl;
    }
}
