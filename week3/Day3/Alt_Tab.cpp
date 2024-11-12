#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int t;cin>>t;
    stack<string>st;
    while(t--){
        string s;cin>>s;
        st.push(s);
    }
    map<string,bool>mp;
    while(!st.empty()){
        string str=st.top();
        st.pop();
        int n=str.size()-1;
        if(!mp[str])cout<<str[n-1]<<str[n];
        mp[str]=true;
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