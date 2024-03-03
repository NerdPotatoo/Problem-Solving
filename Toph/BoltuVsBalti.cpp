#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    while(scanf("%d%d", &n, &m) == 2){
        int x = (n*(n-1)/2);
        int y = m*(m+1)/2;
        int z = y-x;
        //cout << "Sum of " << n << " to " << m << " is -> " << z << "\n";
        printf("Sum of %d to %d is -> %d;\n",n,m,z);
    }
    
}