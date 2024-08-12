#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<pair<long long, int>> prime_factors(long long n) {
    vector<pair<long long, int>> factors;

    // Check for number of 2s in n
    int count = 0;
    while (n % 2 == 0) {
        n /= 2;
        count++;
    }
    if (count > 0) {
        factors.push_back({2, count});
    }

    // Check for odd factors from 3 to sqrt(n)
    for (long long i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        if (count > 0) {
            factors.push_back({i, count});
        }
    }

    // If n is still a prime number and greater than 2
    if (n > 2) {
        factors.push_back({n, 1});
    }

    return factors;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        vector<pair<long long, int>> factors = prime_factors(N);

        for (auto factor : factors) {
            cout << factor.first << " " << factor.second << endl;
        }
        cout << endl;  // Blank line after each test case
    }

    return 0;
}
