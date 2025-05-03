#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

using ll = long long ;

void solve() {
    string s ; cin >> s ; 
    int k ; cin >> k ; 
    if( s == "0" ){
        cout << 1 << endl ; 
    }else if( s[0] == '-' && k % 2 == 0  ){
        cout << -1 << endl ; 
    }else  {
        int digits = s.size() - ( s[0] == '-' ? 1 : 0 ) ; 
        int rs = 1 ; 
        while( digits >= 1 + k*rs ) rs++ ; 
        cout << rs << endl ; 
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t ; cin >> t;
    while (t--) {
        solve();
    }
}