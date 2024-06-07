#include <iostream>

const int MOD = 1000000007;

using namespace std;

long long mul(long long a, long long b, long long m) {
    return ((a % m) * (b % m)) % m;
}

long long fn(long long a, long long n, long long m) {
    if (n == 0) {
        return 1;
    }
    if (n % 2 == 0) {
        return fn(mul(a, a, m), n / 2, m);
    }
    return mul(a, fn(mul(a, a, m), n / 2, m), m);
}

int main() {
    long long a, n;
    cin >> a >> n;
    cout << fn(a, n, MOD) << endl;
    return 0;
}
