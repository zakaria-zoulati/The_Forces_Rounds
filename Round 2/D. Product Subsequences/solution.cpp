#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

using ll = long long;

ll mod = (ll) 1e9 + 7 ; 

void solve() {
    int n ; cin >> n ; 
    vector<int> nums(n) ; 
    for( int i=0 ; i<n ; ++i ){
        cin >> nums[i] ; 
    }
    ll rs = 0 ; 
    ll positives = 0 ; 
    ll negatives = 0 ; 
    ll zeros = 0 ; 
    for( int i=0 ; i<n ; ++i ){
        if( nums[i] > 0 ){
            positives = ( positives * 2 + 1 ) % mod ; 
            negatives = ( 2*negatives ) % mod ; 
            zeros = ( 2*zeros ) % mod ; 
        }else if( nums[i] < 0 ){
            ll neg = negatives ; 
            negatives = ( positives + negatives + 1 ) % mod ; 
            positives = ( neg + positives ) % mod ; 
            zeros = ( 2*zeros ) % mod ; 
        }else { 
            zeros = ( 2*zeros + positives + negatives + 1 ) % mod ; 
        }
    }
    cout << positives  << " " << negatives  << " " << zeros << endl ; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t ; cin >> t ; 
    while (t--) {
        solve();
    }
}
