#include <iostream> 


using namespace std ; 
using ll = long long ; 

ll mod = 1e9 + 7 ; 

ll modE( ll n , ll k ){
    if( k == 1 ){
        return n ; 
    }
    ll half = modE( n , k/2 ) ; 
    half = ( half * half ) % mod ; 
    if( k % 2 == 1 ){
        half = ( half * n ) % mod ; 
    }
    return half ; 
}

void solve(){
    ll x ; cin >> x ; 
    ll rs = modE( x , x ) ;
    cout << rs << endl ;
}



int main(){
    int t ; cin >> t ; 
    while( t-- ){
        solve() ; 
    }
    return 0 ;
}