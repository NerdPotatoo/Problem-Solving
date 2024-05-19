#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// Function to count the number of ones in the binary representation of a number
int countOnes(uint64_t n) {
    return __builtin_popcountll(n);
}

// Process each test case
vector<int> processTestCase(int n, int q, const vector<uint64_t>& arr, const vector<tuple<uint64_t, uint64_t, int>>& queries) {
    // Preprocess the numbers to group them by their binary ones count
    unordered_map<int, vector<uint64_t>> countMap;
    for (auto number : arr) {
        int onesCount = countOnes(number);
        countMap[onesCount].push_back(number);
    }

    // Sort each list in countMap for efficient range queries
    for (auto& pair : countMap) {
        sort(pair.second.begin(), pair.second.end());
    }

    vector<int> results;
    for (const auto& [L, R, K] : queries) {
        if (countMap.find(K) == countMap.end()) {
            results.push_back(0);
            continue;
        }
        // Retrieve the sorted list of numbers with exactly K ones
        const vector<uint64_t>& numbersWithKOnes = countMap[K];
        
        // Use binary search to find the range [L, R] in this list
        auto leftIter = lower_bound(numbersWithKOnes.begin(), numbersWithKOnes.end(), L);
        auto rightIter = upper_bound(numbersWithKOnes.begin(), numbersWithKOnes.end(), R);
        
        // Calculate the count of numbers in the range [L, R] with K ones manually
        int count = 0;
        for (auto it = leftIter; it != rightIter; ++it) {
            count++;
        }
        
        results.push_back(count);
    }

    return results;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, Q;
        cin >> N >> Q;

        vector<uint64_t> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        vector<tuple<uint64_t, uint64_t, int>> queries(Q);
        for (int i = 0; i < Q; ++i) {
            uint64_t L, R;
            int K;
            cin >> L >> R >> K;
            queries[i] = make_tuple(L, R, K);
        }

        vector<int> results = processTestCase(N, Q, arr, queries);
        for (int result : results) {
            cout << result << '\n';
        }
    }

    return 0;
}
