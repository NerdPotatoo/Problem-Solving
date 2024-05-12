#include<iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int x, y, n, i;
        cin >> x >> y >> n;
        for( i = n; i>=0; i--){
            if(i%x==y) break;
        }
        cout << i<< endl;
    }
    
    return 0;
}