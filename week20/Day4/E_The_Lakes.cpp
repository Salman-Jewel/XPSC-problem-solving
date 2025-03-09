#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
int v[1000][1000];
bool vis[1000][1000];
vector<pair<int,int>>d={{0,1},{0,-1},{1,0},{-1,0}};
int n,m;
bool OK(int i,int j){
    if(i<0 || i>=n || j<0 || j>=m)return false;
    else return true;
}
ll dfs(int si,int sj,ll k=0){
    vis[si][sj]=true;
    k+=v[si][sj];
    for(int i=0;i<4;i++){
        int x=si+d[i].first;
        int y=sj+d[i].second;
        if(OK(x,y) && !vis[x][y] && v[x][y]!=0){
            k+=dfs(x,y);
        }
    }
    return k;
}  
void newbie(){
    cin>>n>>m;
    memset(v,0,sizeof(v));
    memset(vis,false,sizeof(vis));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && v[i][j]!=0)ans=max(dfs(i,j),ans);
        }
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