#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()

void newbie() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    // Sort the array for binary search
    sort(all(v));

    while (k--) {
        ll val;
        cin >> val;
        int lo = 0, hi = n - 1;
        bool found = false;

        while (lo <= hi) {
            int mid = (hi + lo) / 2;
            if (v[mid] == val) {
                found = true;
                break;
            }
            if (v[mid] > val) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        if (found)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    newbie();

    return 0;
}
