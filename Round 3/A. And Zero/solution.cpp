#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

using ll = long long;

ll mod = (ll) 1e9 + 7;

void solve() {
    int n ; cin >> n ; 
    int count = 0 ; 
    int unsetted = 0 ; 
    while( n > 0 ){
        if( n % 2 == 0 ) unsetted++ ;   
        count++ ; 
        n >>= 1;  
    }
    int rs = 1 * ( 1 << unsetted ) ; 
    cout << rs << endl ; 
  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ; cin >> t ; 
    while (t--) {
        solve();
    }
}
