#include "bits/stdc++.h"
using namespace std;

int sqrt_find(int n){
    int low = 1,high=n;

    while(low<=high){
        int mid = (low+high)/2;
        int val = mid*mid;

        if(val<=n){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return high;
}
int main(){
int n = 28;
    int ans = sqrt_find(n);
    cout << "The floor of square root of " << n
         << " is: " << ans << "\n";
    return 0;
}
// int func(int mid, int n, int m) {
//     long long ans = 1;
//     for (int i = 1; i <= n; i++) {
//         ans = ans * mid;
//         if (ans > m) return 2;
//     }
//     if (ans == m) return 1;
//     return 0;
// }

// int NthRoot(int n, int m) {
//     //Use Binary search on the answer space:
//     int low = 1, high = m;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         int midN = func(mid, n, m);
//         if (midN == 1) {
//             return mid;
//         }
//         else if (midN == 0) low = mid + 1;
//         else high = mid - 1;
//     }
//     return -1;
// }
