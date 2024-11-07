#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int mi=1,mx=n,i=0,j=n-1;
    while(i<j){
        if(v[i]==mi || v[i]==mx){
            if(v[i]==mi)mi++;
            if(v[i]==mx)mx--;
            i++;
        }
        else if(v[j]==mi || v[j]==mx){
            if(v[j]==mi)mi++;
            if(v[j]==mx)mx--;
            j--;
        }
        else{
            cout<<i+1<<" "<<j+1<<nl;
            return;
        }
    }
    cout<<-1<<nl;
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