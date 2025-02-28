#include <bits/stdc++.h>
using namespace std;
 
// Returns true if x is a perfect square.
inline bool isPerfectSquare(long long x) {
    long long r = (long long)floor(sqrt(x));
    return r * r == x;
}
 
int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // If the total sum is a perfect square, no valid permutation exists.
        long long total = (long long)n * (n + 1) / 2;
        if(isPerfectSquare(total)){
            cout << -1 << "\n";
            continue;
        }
 
        // Start with the identity permutation.
        vector<int> p(n);
        for (int i = 0; i < n; i++){
            p[i] = i + 1;
        }
 
        long long prefix = 0;
        // Process the permutation and fix any prefix whose sum is a perfect square.
        for (int i = 0; i < n; i++){
            prefix += p[i];
            if(isPerfectSquare(prefix)){
                // If possible, swap with the next element.
                if(i + 1 < n){
                    // Adjust the prefix: subtract the current element and add the next.
                    prefix = prefix - p[i] + p[i+1];
                    swap(p[i], p[i+1]);
                } else {
                    // For the last element, swap with the previous element.
                    prefix = prefix - p[i] + p[i-1];
                    swap(p[i], p[i-1]);
                }
            }
        }
 
        // (Optional) Verify all prefix sums are not perfect squares.
        prefix = 0;
        bool valid = true;
        for (int i = 0; i < n; i++){
            prefix += p[i];
            if(isPerfectSquare(prefix)){
                valid = false;
                break;
            }
        }
 
        if(!valid){
            cout << -1 << "\n";
        } else {
            for (int i = 0; i < n; i++){
                cout << p[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
