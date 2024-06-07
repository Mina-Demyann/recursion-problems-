#include <iostream>
#include <vector>
using namespace std;
 
int binarySearch(const vector<int>& A, int low, int high, int X) {
    if (low > high) {
        return -1; // Base case: X is not found
    }
 
    int mid = low + (high - low) / 2;
 
    if (A[mid] == X) {
        return mid + 1; // Return 1-based index
    } else if (A[mid] > X) {
        return binarySearch(A, low, mid - 1, X); // Search left half
    } else {
        return binarySearch(A, mid + 1, high, X); // Search right half
    }
}
 
int main() {
    int N;
    cin >> N;
 
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
 
    int q;
    cin >> q;
 
    while (q--) {
        int X;
        cin >> X;
        int result = binarySearch(A, 0, N - 1, X);
        cout << result << endl;
    }
 
    return 0;
}
