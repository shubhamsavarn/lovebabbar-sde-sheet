#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int ans = arr[n-1] - arr[0];
        int small = arr[0] + k;
        int large = arr[n-1] - k;
        int mi,ma;
        for(int i =0;i<n-1;i++){
            mi  = min(small,arr[i+1]-k);
            ma = max(large,arr[i]+k);
            ans = min(ans,ma-mi);
        }
        return ans;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
