#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
vector<ll> pre;
bool ispalindrome(ll n){
	ll m=n;
	ll c=0;
	while(m){
		c=c*10+m%10;
		m/=10;
	}
	return n==c;
}
void allpalindrom(){
	for(int i=0;i<(1<<15);i++){
		if(ispalindrome(i))
			pre.push_back(i);
	}
}    
void newbie(){
   int n;cin>>n;
   unordered_map<int,int>mp;
   ll ans=0,val;
   for(int i=0;i<n;i++){
       cin>>val;
       for(auto e : pre){
           ll x=e^val;
           if(mp.find(x)!=mp.end()){
                ans+=mp[x];
           }
       }
       mp[val]++;
       ans++;
   }
   cout<<ans<<nl; 
}
    
int main()
{
    ios::sync_with_stdio(false),
    cin.tie(0),cout.tie(0);
    int _;cin >> _;
    allpalindrom();
    while (_--){
       newbie();
    }
    return 0;
}