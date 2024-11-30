#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,p;cin>>n>>p;
   string s;cin>>s;
   ll ans=0,i=0,j=0,c=1;
    while(i<n){
        if(s[i]=='0'){
            j++;
        }
        else{
            if(j>p){
                j-=p;
                if(c&&j>0){ ans++;j--;}
                if(j>0){ans+=(j/(p+1));}
            }
            c=0;
            j=0;
        }
        i++;
    }
    if(c && j>0){
        ans++;j--;
    }
    if(j>0){
        ans+=(j/(p+1));
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