#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3,temp = "";
    cin >> s1 >> s2 >> s3;
    temp += s1 + s2;
    sort(temp.begin(), temp.end());
    sort(s3.begin(),s3.end());
    int len1 = temp.size();
    int len2 = s3.size();
    int flag = 1;
    if(len1 == len2){
        for(int i = 0; i<len1;i++){
            if(temp[i] != s3[i]){
                flag = 0;
                break;
            }
        }
    }
    else {
        flag = 0;
    }
    if (flag == 0){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}