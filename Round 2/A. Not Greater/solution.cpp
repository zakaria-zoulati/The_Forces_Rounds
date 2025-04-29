#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

using ll = long long;


void solve() {
  int n ; cin >> n ; 
  cout << ( 1 << __builtin_popcount(n) ) << endl ; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t ; cin >> t ; 
    while (t--) {
        solve();
    }
}
