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
set<vector<int>>tt;
void helper(vector<int>& v, int sum,int temsum,int i,vector<int>temp){
    if(temsum>sum)return ;
    if(temsum==sum){
        sort(temp.begin(),temp.end());
        tt.insert(temp);return;
    }
    for(int j=i;j<v.size();j++){
        if(j>i&&v[j-1]==v[j])continue;
        temp.push_back(v[j]);
        helper(v,sum,temsum+v[j],j+1,temp);
        temp.pop_back();
    }
    // temsum+=v[i];
    // temp.push_back(v[i]);
    // helper(v,sum,temsum,i+1,temp);
    // temsum-=v[i];
    // //temp.pop_back();
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<int>temp;
    helper(candidates,target,0,0,temp);
    vector<vector<int>>ans;
    for(auto e : tt){
        ans.push_back(e);
    }
    return ans;
}    
void newbie(){
   int n,k;cin>>n>>k;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   vector<vector<int>> ans=combinationSum2(v,k);
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