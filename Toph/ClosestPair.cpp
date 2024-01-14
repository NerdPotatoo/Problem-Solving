#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int x_val[n];
    int y_val[n];
    for(int i = 0; i< n; i++){
        cin>>x_val[i];
        cin>>y_val[i];
    }
    int len = n*(n-1)/2;
    float distance[len];
    int k = 0;
    while(k<len){
        for(int i = 0; i<n; i++ ){
            for(int j = i+1; j<n; j++){
                int X = pow((x_val[j] - x_val[i]),2);
                int Y = pow((y_val[j] - y_val[i]),2);
                distance[k] = sqrt(X+Y);
                k++;
            }
        }
    }
    float mn = distance[0];
    for(int i = 1; i<len; i++){
       mn = min(mn,distance[i]); 
    }
    cout << mn;
}