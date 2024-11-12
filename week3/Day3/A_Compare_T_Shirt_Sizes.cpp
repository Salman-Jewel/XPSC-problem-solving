#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int t;cin>>t;
    while(t--){
        string a,b;cin>>a>>b;
        int n=a.size(),m=b.size();
        if(a==b)cout<<"="<<nl;
        else if(a[n-1]==b[m-1]){
            if(a[n-1]=='S'){
                if(n>m)cout<<"<"<<nl;
                else cout<<">"<<nl;
            }
            else{
                if(n>m)cout<<">"<<nl;
                else cout<<"<"<<nl;
            }
        }
        else if(a[n-1]=='L'){
            cout<<">"<<nl;
        }
        else if(b[m-1]=='L'){
            cout<<"<"<<nl;
        }
        else if(a[n-1]=='S'){
            cout<<"<"<<nl;
        }
        else if(b[m-1]=='S'){
            cout<<">"<<nl;
        }
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