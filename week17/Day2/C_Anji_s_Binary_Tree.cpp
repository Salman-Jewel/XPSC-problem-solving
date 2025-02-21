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
ll dfs(int node, vector<vector<int>> &adj, 
    vector<char> &dp, string &s, char c) {
       ll mini = 1e9;
       for(auto cv: adj[node]) {
           mini = min(mini, dfs(cv,adj,dp,s,s[node]));
       }
    
       if(node==1) return mini;
    
       if(mini==1e9) return ((dp[node]!=c)? 1:0);
       else return mini+((dp[node]!=c)? 1:0);
}    
void newbie(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    s = '#'+s;
 
    vector<vector<int>> adj(n+1);
    vector<char> dp(n+1,0);
    for(int i=1; i<=n; i++) {
        int l,r;
        cin >> l >> r;
        if(l) adj[i].push_back(l), dp[l] = 'L';
        if(r) adj[i].push_back(r), dp[r] = 'R';
    }
    cout << dfs(1,adj,dp,s,s[0]) << nl;
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