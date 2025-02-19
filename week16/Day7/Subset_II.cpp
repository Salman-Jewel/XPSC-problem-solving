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
void backtrack(vector<int>& nums,int index,vector<int>& cur,vector<vector<int>>& ans){
    ans.push_back(cur);
    for(int i=index ;i<nums.size();i++){
        if(i>index && nums[i]==nums[i-1])continue;
        cur.push_back(nums[i]);
        backtrack(nums,i+1,cur,ans);
        cur.pop_back();
    }
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>>ans;
    vector<int> cur;
    sort(nums.begin(),nums.end());
    backtrack(nums,0,cur,ans);
    return ans;
}    
void newbie(){
   int n;cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   vector<vector<int>> ans = subsetsWithDup(v);
   for(auto e : ans){
      cout<<" [";
      for(auto x : e){
        cout<<x<<' ';
      }
      cout<<"] ";
   }
}
    
int main()
{
    ios::sync_with_stdio(false),
    cin.tie(0),cout.tie(0);
    // int _;cin >> _;
    // while (_--){
        newbie();
    // }
    return 0;
}