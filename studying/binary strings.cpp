//
// Created by Mina on 06/06/2024.
//
// Recursive Example ==>  binary strings
// it talks about the way you can use recurrion to give you all the possible outcomes and controll it for a specific need 


#include <iostream>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#include "vector"
#include "algorithm"

#include "numeric"
#include "limits"
#include "set"
#define ull unsigned long long
#define dd double
#define ld long double
#define PQ priority_queue
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define S second
#define F first
#define MP make_pair
#define el "\n"
#define PI 3.14159265
using namespace std;
ll M=1e9+7;
const int sz=1e5+10;
const int OO=0x3f3f3f3f;
#define all(my) my.begin(), my.end()
#define rall(my) my.rbegin(), my.rend()

void rec(string s, int sum, int sum2, int n) {
    // Base case: if the generated string length is 2*n
    if (s.size() == 2 * n) {
        // Check if the two sums are equal
        if (sum == sum2) {
            cout << s << endl;
        }
        return;
    }

    // Recursive step: append '0' and call recursively
    rec(s + '0', sum, sum2, n);

    // Conditional recursive step: append '1' and update sums
    if (s.size() < n) {
        // First half of the string
        rec(s + '1', sum + 1, sum2, n);
    } else {
        // Second half of the string
        rec(s + '1', sum, sum2 + 1, n);
    }
}

int main() {

    int n ; cin >> n;

    // Initiate the recursive function with initial values
    rec("", 0, 0, n);

    return 0;
}

