#include<iostream>
using namespace std;
int vowel(string s, int i)
{
    if(s[i]=='\0')
    {
        return 0;
    }
    int ans = vowel(s,i+1);
    if(s[i]>='A' && s[i]<='Z'){
        s[i] += 32;
    }
    if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
        return ans+1;
    }
    else return ans;
}
int main()
{
    string s;
    getline(cin,s);
    cout<<vowel(s,0);
    return 0;
}