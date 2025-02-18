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
void f(vector<int>&nums , vector<int>&a, vector<vector<int>>& ans,int freq[]){
     if(nums.size()==a.size()){
        ans.push_back(a);
        return;
     }
     for(int i=0;i<nums.size();i++){
        if(!freq[i]){
            a.push_back(nums[i]);
            freq[i]=1;
            f(nums,a,ans,freq);
            freq[i]=0;
            a.pop_back();
        }
     }
}
vector<vector<int>> permute(vector<int>& nums){
    vector<vector<int>> ans;
    vector<int>a;
    int freq[nums.size()];
    for(int i=0;i<nums.size();i++){
        freq[i]=0;
    }
    f(nums,a,ans,freq);
    return ans;
}    
void newbie(){
   int n;cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   vector<vector<int>> ans=permute(v);
   for(int i=0;i<ans.size();i++){
       for(auto e : ans[i]){
          cout<<e<<' ';
       }
       cout<<nl;
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