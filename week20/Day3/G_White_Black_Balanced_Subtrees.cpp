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
    
void newbie(){
    int n;
	cin >> n;
	vector<int> child[n + 7];
	for (int i = 2; i <= n; i++) {
		int x;
		cin >> x;
		child[x].push_back(i);
	}
	string s;
	cin >> s;
	int res = 0;
	function<int(int)> dp = [&] (int x) {
		int bal = (s[x - 1] == 'B') ? -1 : 1;
		if (child[x].empty()) {return bal;}
		for (int i : child[x]) {
			bal += dp(i);
		}
		if (bal == 0) {res++;}
		return bal;
	};
	dp(1);
	cout << res << '\n';
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