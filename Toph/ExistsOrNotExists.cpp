#include<bits/stdc++.h>
using namespace std;
bool binarysearch(vector<int> a, int s, int e, int k ){
    int mid = s + (e-s)/2;
    while(s<=e){
        if(a[mid] == k){
            return true;
        }
        else if(a[mid]>k){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return false;
}
int main(){
    int n , q;
    cin >> n >> q;
    vector<int> a;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    int l, r, key;
    while(q--){
        cin >> l >> r >> key;
        auto ans = lower_bound(a.begin(),a.end(),key);
        if(ans == true){
         cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
        cout << ans << "\n";
    }
}
