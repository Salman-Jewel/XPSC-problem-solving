#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,m,k;cin>>n>>m>>k;
   vector<int>a(n),b(m);
   map<int,int>mp,mp2;
   for(int i=0;i<n;i++){
        cin>>a[i];
    }
   for(int i=0;i<m;i++){
        cin>>b[i];
        mp[b[i]]++;
    }
    int i=0,j=0,c=0,ans=0;
    while(j<n){
        if(mp[a[j]]>0){
            mp2[a[j]]++;
            if(mp[a[j]]>=mp2[a[j]])c++;
        }
        if(j-i+1==m){
            if(c>=k){
                ans++;
            }
            if(mp[a[i]]>0){
                mp2[a[i]]--;
                if(mp2[a[i]]<mp[a[i]])c--;
            }
            i++;
        }
        j++;
    }
    cout<<ans<<nl;
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