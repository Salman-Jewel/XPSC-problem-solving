#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n;cin>>n;
    string s;cin>>s;
    int i=0,j=n-1;
    while(i<j){
        if(s[i]!='B')i++;
        else if(s[j]!='B')j--;
        else break;
    }
    cout<<j-i+1<<nl;
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