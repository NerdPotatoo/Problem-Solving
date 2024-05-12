#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, first = 0, second = 1, next;
    cin >> n;
    if(n>1){
        cout << first << " " << second << " ";
        for(int i = 3; i <= n; i++)
        {
            next = first + second;
            first = second;
            second = next;
            cout << next << " ";
        }
    }
    else{
        cout << first << " "; 
    }

}