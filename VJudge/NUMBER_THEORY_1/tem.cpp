#include <iostream>
#include <vector>
#include <map>
using namespace std;

void sieveOfEratosthenes(int max, map<int, bool>& primes) {
    vector<bool> isPrime(max + 1, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers

    for (int p = 2; p * p <= max; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= max; i += p) {
                isPrime[i] = false;
            }
        }
    }

    for (int p = 2; p <= max; ++p) {
        if (isPrime[p]) {
            primes[p] = true;
        }
    }
}

int main() {
    const int MAX = 1000000;
    map<int, bool> primes;

    sieveOfEratosthenes(MAX, primes);

    // Example: Print all prime numbers under 1,000,000
    // for (const auto& pair : primes) {
    //     cout << pair.first << " "<<pair.second<<endl;
    // }
    cout << primes[42]<<endl;

    return 0;
}