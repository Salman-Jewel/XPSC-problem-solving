#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=200007;
string s;
int cnt[M][26];
int n,k,ans=0;
int differ(int u,int v){
    int ret=0,mx=0;
    for (int j=0;j<26;++j){
        ret+=cnt[u][j]+cnt[v][j];
        mx=max(mx,cnt[u][j]+cnt[v][j]);
    }
    return ret-mx;
}
void newbie(){
    cin>>n>>k>>s;
    for (int i=0;i<k;++i){
        for (int j=0;j<26;++j){
            cnt[i][j]=0;
        }
    }
    for (int i=0;i<n;++i){
        cnt[i%k][s[i]-'a']++;
    }
    int ans=0;
    for (int i=0;i<k;++i){
        ans+=differ(i,k-1-i);
    }
    cout<<ans/2<<"\n";
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