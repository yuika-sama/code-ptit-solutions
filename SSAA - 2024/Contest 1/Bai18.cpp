#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

// Function to get prime factors and their powers in K
vector<pair<long long, int>> primeFactorize(long long K) {
    vector<pair<long long, int>> factors;
    for (long long i = 2; i * i <= K; ++i) {
        if (K % i == 0) {
            int count = 0;
            while (K % i == 0) {
                K /= i;
                count++;
            }
            factors.emplace_back(i, count);
        }
    }
    if (K > 1) {
        factors.emplace_back(K, 1);
    }
    return factors;
}

// Function to count occurrences of prime p in N!
long long countPrimeInFactorial(long long N, long long p) {
    long long count = 0;
    long long power = p;
    while (power <= N) {
        count += N / power;
        if (power > N / p) break; // to prevent overflow
        power *= p;
    }
    return count;
}

int main() {
    long long N, K;
    cin >> N >> K;

    // Get the prime factors of K
    auto factors = primeFactorize(K);

    long long M = LLONG_MAX;
    for (const auto& factor : factors) {
        long long prime = factor.first;
        int exponent = factor.second;
        long long count = countPrimeInFactorial(N, prime);
        M = min(M, count / exponent);
    }

    cout << M << endl;
    return 0;
}
