#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n;cin>>n;
    set<string> a,b,c;
    string s1,s2,s3;
    for(int i=0;i<n;i++){
        cin>>s1;
        a.insert(s1);
    }
    for(int i=0;i<n;i++){
        cin>>s2;
        b.insert(s2);
    }
    for(int i=0;i<n;i++){
        cin>>s3;
        c.insert(s3);
    }
    int fi=0,second=0,third=0;
    for(auto e : a){
        if(b.find(e)!=b.end() && c.find(e)!=c.end())fi+=0;
        else if(b.find(e)!=b.end() || c.find(e)!=c.end())fi+=1;
        else fi+=3;
    }
    for(auto e : b){
        if(a.find(e)!=a.end() && c.find(e)!=c.end())second+=0;
        else if(a.find(e)!=a.end() || c.find(e)!=c.end())second+=1;
        else second+=3;
    }
    for(auto e : c){
        if(a.find(e)!=a.end() && b.find(e)!=b.end() )third+=0;
        else if(a.find(e)!=a.end() || b.find(e)!=b.end() )third+=1;
        else third+=3;
    }
    cout<<fi<<" "<<second<<" "<<third<<nl;
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