#include <iostream>
#include <vector>

using namespace std;

using ll = long long;


int arr[61] ; 

void solve() {
    ll n ; cin >> n ; 
    cout << arr[ n % 60 ] << endl ; 
}

void precompute(){
    arr[0] = 0 ; 
    arr[1] = 1 ; 
    for( int i=2 ; i<60 ; ++i ){
        arr[i] = ( arr[i-1] + arr[i-2] ) % 10 ; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    precompute() ; 
    
    int t ; cin >> t;
    while (t--) {
        solve();
    }
}
