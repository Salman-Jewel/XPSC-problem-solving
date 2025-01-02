#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e3+10;
const int M=1e9+7;
ll countSubarraysWithSum(const vector<ll>& arr, ll x) {
    unordered_map<ll, ll> preSum;
    ll cur = 0;
    ll count = 0;
    preSum[0] = 1;
    for (ll num : arr) {
        cur += num;
        if (preSum.find(cur - x) != preSum.end()) {
            count += preSum[cur - x];
        }
        preSum[cur]++;
    }

    return count;
}

int main() {
    ll n,x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << countSubarraysWithSum(arr, x) << endl;

    return 0;
}
