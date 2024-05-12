#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(scanf("%d%d", &n, &m) != EOF)
    {
        int sum = 0;
        if(n <= 0 || m <= 0) break;
        for(int i = min(n,m); i<= max(n,m); i++)
        {
            sum += i;
            cout << i << " ";
        }
        cout << "sum =" << sum << endl;;
    }
}