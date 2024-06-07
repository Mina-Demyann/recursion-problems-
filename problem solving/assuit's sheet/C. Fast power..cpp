#include <bits/stdc++.h>
using namespace std ;
#include <iostream>

#include <fstream>
#include <sstream>
#include <vector>
#include <set>
#include <bitset>
#include <map>

#include <deque>
#include <string>

#include <algorithm>
#include <numeric>
#include <cstdio>
#include <cassert>
#include <cstdlib>
#include <cstring>

#include <ctime>
#include <cmath>
#define rep(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)

#define per(i,a,b) for(ll i=(ll)(a);i>(ll)(b);i--)
#define each(a, x) for (auto &a : x)
#define pb push_back
#define pbk pop_back
#define mp make_pair
#define fs first
#define sc second
#define all(x) (x).begin(), (x).end()
#define foreach(i, a) for (__typeof((a).begin()) i = (a).begin(); i != (a).end(); ++i)
#define len(a) ((int) (a).size())
#include <numeric>
#include "string"
#define rall(my) my.rbegin(), my.rend()
#define ll long long
#define el "\n"
#define ull unsigned long long
#define dd double
#define ld long double
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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
