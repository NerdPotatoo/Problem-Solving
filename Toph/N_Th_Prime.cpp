#include<bits/stdc++.h>
using namespace std;
int isPrime[ 1000100 ] ; 
 void sieve() {
 	for( int i = 2 ; i <= 1000000 ; i ++ ) {
 		isPrime[ i ] = 1 ; 
 	}	
 	for( long long i = 2 ; i <= 1000000 ; i ++ ) {
 		for( long long j = i * i ; j <= 1000000 ; j += i ) {
			isPrime[ j ] = 0 ; 
		}
	}
}
int main(){
    sieve();
    int n;
    cin >> n;
    for(int i = 2; i <= 1000000; i++){
        
        if(isPrime[i] == 1){
            n--;
            if(n==0){
                cout << i;
                break;
            }
            
        }
    }
    return 0;
}