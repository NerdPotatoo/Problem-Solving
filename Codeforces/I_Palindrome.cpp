#include<bits/stdc++.h>
using namespace std;
string palindrome(string s)
{
    int i =0, j = s.size()-1;
    while(i<j){
        if(s[i]!=s[j]) return "NO";
        else {
            i++;
            j--;
        }
    }
    return "YES";

}
int main()
{
    string s;
    cin>>s;
    cout<<palindrome(s)<<endl;
    return 0;
}