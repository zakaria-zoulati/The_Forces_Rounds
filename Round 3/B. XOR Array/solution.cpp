#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

using ll = long long;

ll mod = (ll) 1e9 + 7;


void solve() {
   int n ; cin >> n ; 
   int q ; cin >> q ; 
   vector<int> arr(n) ; 
   for( int i=0 ; i<n ; ++i ){
       cin >> arr[i] ; 
   }
   int rs = 0 ; 
   for( int i=0 ; i<n ; ++i ){
       rs ^= arr[i] ; 
   }
   while( q-- ){
       int i ; cin >> i ; 
       int x ; cin >> x ; 
       rs ^= arr[i-1] ; 
       rs ^= ( arr[i-1] | x ) ; 
       arr[i-1] |= x ; 
       cout << rs << endl ; 
   }
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1 ; 
    while (t--) {
        solve();
    }
}
