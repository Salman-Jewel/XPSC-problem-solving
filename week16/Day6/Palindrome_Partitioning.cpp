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
bool is_palindrom(string s,int l,int r){
    while(l<=r){
        if(s[l]!=s[r]){
            return false;
        }l++,r--;
    }
    return true;
}
void f(int idx,vector<vector<string>>& ans,vector<string>&a,string& s, int n){
    if(idx==n){
        ans.push_back(a);
        return ;
    }
    for(int i=idx;i<n;i++){
        if(is_palindrom(s,idx,i)){
            a.push_back(s.substr(idx,i-idx+1));
            f(i+1,ans,a,s,n);
            a.pop_back();
        }
    }
}
vector<vector<string>> partition(string s) {
    vector<vector<string>> ans; 
    vector<string>a;
    int n=s.size();
    f(0,ans,a,s,n);
    return ans;
}    
void newbie(){
   string s;cin>>s;
   
   vector<vector<string>>ans=partition(s);
   for(auto x : ans){
      for(auto e : x){
        cout<<e<<' ';
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