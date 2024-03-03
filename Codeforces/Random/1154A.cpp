#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // CODE HERE
    vector<int> nums;
    for(int i = 0; i<4; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(), nums.end());
    int n1, n2, n3;
    n1 = nums[3] - nums[0];
    n2 = nums[1] - n1;
    n3 = nums[3] - (n1+n2);
    cout << n1 << " " << n2 << " " << n3;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}