#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(), (a).end()
const ll N = 1e6 + 10;
const int M = 1e9 + 7;

void newbie() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<ll, ll> mp;
    ll sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
        sum += v[i];
    }

    priority_queue<ll> pq;
    pq.push(sum);
    int i=n-1;
    while (!pq.empty()) {
        ll top = pq.top();
        pq.pop();

        if (mp[top] > 0) {
            mp[top]--;
            continue;
        }

        if (i==0 || top == 1) {
            cout << "NO" << nl;
            return;
        }

        ll a = top / 2;
        ll b = (top + 1) / 2;
        pq.push(a);
        pq.push(b);
        i--;
    }

    for (auto e : mp) {
        if (e.second != 0) {
            cout << "NO" << nl;
            return;
        }
    }

    cout << "YES" << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int _;
    cin >> _;
    while (_--) {
        newbie();
    }
    return 0;
}
