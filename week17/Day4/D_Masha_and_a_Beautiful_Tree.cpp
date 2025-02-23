#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const ll N=1e6+10;
const int M=1e9+7;
int n, m;
const int MAXM = 300300;
int arr[MAXM];

int solve(int l, int r) {
	if (r - l == 1) return 0;
	int mid = (l + r) >> 1;
	int mal = *max_element(arr + l, arr + mid);
	int mar = *max_element(arr + mid, arr + r);
	int ans = 0;
	if (mal > mar) {
		++ans;
		for (int i = 0; i < (mid - l); ++i)
			swap(arr[l + i], arr[mid + i]);
	}
	return solve(l, mid) + solve(mid, r) + ans;
}

int solve() {
	int ans = solve(0, m);
	if (is_sorted(arr, arr + m))
		return ans;
	return -1;
}    
void newbie(){
    //int m;
    cin >> m;
    for (int i = 0; i < m; ++i)
        cin >> arr[i];
    cout << solve() << endl;
}
    
int main()
{
    ios::sync_with_stdio(false),
    cin.tie(0),cout.tie(0);
    int _;cin >> _;
    while (_--){
       newbie();
    }
    return 0;
}