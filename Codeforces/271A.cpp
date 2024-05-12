#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    int year, temp;
    cin >> year;
    year += 1;
    temp = year;
    set<int> s;
    for(int i = 1; i<=4; i++)
    {
        s.insert(temp%10);
        temp /= 10;
    }
    while(s.size() != 4)
    {
        s.clear();
        year += 1;
        temp = year;
        for(int i = 1; i<=4; i++)
        {
            s.insert(temp%10);
            temp /= 10;
        }
    }
    cout << year;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

