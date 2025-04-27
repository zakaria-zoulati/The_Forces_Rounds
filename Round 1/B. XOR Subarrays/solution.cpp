#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

void solve() {
    ll n ; cin >> n ; 
    ll rs = 0 ; 
    for( ll i=0 ; i<n ; ++i ){
        ll ai ; cin >> ai ; 
        ll num = ( (i+1)*(n-i) ) ; 
        if( num % 2 == 1 ) {
            rs ^= ai ; 
        }
    }
    cout << rs << endl ; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
