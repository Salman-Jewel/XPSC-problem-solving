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
vector<vector<int>>ans;
void helper(vector<int>& v, int tar,int temsum,int i,vector<int>temp){
      if(temsum>tar)return;
      if(i==v.size()){
          if(temsum==tar){
              ans.push_back(temp);
          }
          return;
      }
      temsum+=v[i];
      temp.push_back(v[i]);
      helper(v,tar,temsum,i,temp);
      temsum-=v[i];
      temp.pop_back();
      helper(v,tar,temsum,i+1,temp);
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        helper(candidates,target,0,0,temp);
        return ans;
}    
void newbie(){
   int n,k;cin>>n>>k;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   vector<vector<int>> ans=combinationSum(v,k);
   for(auto e : ans){
       for(int x : e){
        cout<<x<<' ';
       }cout<<nl;
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