#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
 bool canProduce(const vector<long long>& machines, long long t, long long time) {
    long long totalPro = 0;
    for (long long machine : machines) {
        totalPro += time / machine;
        if (totalPro >= t) {
            return true;
        }
    }
    return totalPro >= t;
}   
void newbie(){
    int n;
    long long t;
    cin >> n >> t;
    vector<long long> machines(n);
    for (int i = 0; i < n; ++i) cin >> machines[i];
    long long left = 1;
    long long right = *min_element(machines.begin(), machines.end()) * t; // Maximum possible time
    long long result = right;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (canProduce(machines, t, mid)) {
            result = mid; 
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout<<result<<nl;
    
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