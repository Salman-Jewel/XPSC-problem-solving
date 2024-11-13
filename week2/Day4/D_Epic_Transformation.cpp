#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n,x;cin>>n;
    map<ll, ll>mp;
    for(int i = 0; i < n; i++){
        cin >> x;
        mp[x]++;
    }
    priority_queue<int> pq;
    for(auto e : mp){
        pq.push(e.second);
    }
    while(!pq.empty()){
        if(pq.size()<2)break;
        int a=pq.top();pq.pop();
        int b=pq.top();pq.pop();
        a--,b--;
        if(a>0)pq.push(a);
        if(b>0)pq.push(b);
    }
    if(pq.empty())cout<<0<<nl;
    else cout<<pq.top()<<nl;
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