#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n;cin>>n;
    int a[n][n-1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            cin>>a[i][j];
        }
    }
    map<int,int>mp;
    for(int i=0;i<n-1;i++){
        int x=0,y=0;
        for(int j=0;j<n;j++){
            if(x==0){x=a[j][i];}
            else if(a[j][i]!=x && y==0){y=a[j][i];}
           if(i==0)mp[a[j][i]]++;
        }
        if(i==0){
            if(mp[x]>mp[y])cout<<x<<" "<<y<<" ";
            else cout<<y<<" "<<x<<" ";
        }
        else{
            if(mp[x]){cout<<y<<" ";mp[y]=1;}
            else {cout<<x<<" ";mp[x]=1;}
        }
        //mp[x]=0,mp[y]=0;
    }
    cout<<nl;

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