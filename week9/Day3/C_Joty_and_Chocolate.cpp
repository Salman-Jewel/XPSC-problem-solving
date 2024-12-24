#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;

// Function to compute the least common multiple
ll lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

void newbie() {
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll ma = n / a;
    ll mb = n / b;
    ll ab = n / lcm(a, b);

    ll sum = ma * p + mb * q - ab * min(p, q);

    cout << sum << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    newbie();

    return 0;
}
