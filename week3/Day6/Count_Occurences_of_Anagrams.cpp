#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
int search(string p, string t) {
	    int n=t.size();
	    int i=0,j=0,k=p.size();
	    unordered_map<char,int>mp;
        for(char ch : p)mp[ch]++;
        int cnt=mp.size(),ans=0;
	    while (j<n){
            if(mp.find(t[j]) != mp.end()){
                mp[t[j]]--;
                if(mp[t[j]]==0)cnt--;
            }
            if(j-i+1==k){
                if(cnt==0)ans++;
                if(mp.find(t[i]) != mp.end()){
                    if(mp[t[i]]==0)cnt++;
                    mp[t[i]]++;
                }
                i++;
            }
            j++;
        }
      return ans;
        
}    
void newbie(){
    string t,p;cin>>t>>p;
    int ans=search(p,t);
    cout<<ans<<nl;
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