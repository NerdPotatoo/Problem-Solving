#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> m >> n;
    int ar[m][n];
    // Input array
    for(int i = 0; i < m; i++){
        for( int j = 0; j < n; j++){
            cin >> ar[i][j];
        }
    }
    int tc;
    cin >> tc;
    while(tc--){
        int r, c;
        cin >> r >> c;
        int minr = r-1, a = r-1;
        int minc = c-1, b = c-1;
        int maxr = r+1;
        int maxc = c+1;
        int cnt = 1;
        while(cnt <= 7){
            if(minc<maxc){
                swap(ar[a][b], ar[minr][minc+1]);
                minc++;
                cnt++;
            }
            else if(minr<maxr){
                swap(ar[a][b], ar[minr+1][maxc]);
                minr++;
                cnt++;
            }
            else if(maxc<=minc && maxc>b){
                swap(ar[a][b], ar[maxr][maxc-1]);
                maxc--;
                cnt++;
            }
            else if(maxr<=minr){
                swap(ar[a][b], ar[maxr-1][maxc]);
                maxr--;
                cnt++;
            }
        }
    // printing output
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                cout << ar[i][j]<<" ";
            }
            cout << endl;
        }
    }
}