#include <iostream>
#include <vector>
#include <map> 
#include <algorithm>
#include <utility>
#include <fstream>
#include <bitset>
#include <cmath>
#include <iomanip>

using namespace std;
using ll = long long;
using ld = long double;

ll gcd( ll a , ll b ){
    while( b != 0 ){
        ll temp = a%b ; 
        a = b ; 
        b = temp ; 
    }
    return a ; 
}

void solve(){
    int n ; cin >> n ; 
    vector<ll> arr(n) ;
    for( int i=0 ; i<n ; ++i ){
        cin >> arr[i] ; 
    }
    if( n == 1 ){
        cout << 1'000'000'000 << '\n' ; 
    }else {
        ll g = arr[0] ; 
        for( ll i : arr ){
            g = gcd( i , g ) ; 
        }
        if( g > 1 ){
            for(int i=0 ; i<n ; ++i){
                arr[i] /= g ; 
            }
        }
        ll rs = g ;
        cout << g << '\n' ; 
        ll added = 1;
        vector<ll> pref(n) ;
        vector<ll> suff(n) ; 
        pref[0] = arr[0] ; 
        for( int i=1 ; i<n ; ++i ){
            pref[i] = gcd( arr[i] , pref[i-1] ) ; 
        }
        suff[n-1] = arr[n-1] ; 
        for( int i=n-2 ; i>=0 ; --i ){
            suff[i] = gcd( arr[i] , suff[i+1] ) ; 
        }
        added = max( pref[n-2] , added ) ; 
        added = max( suff[1] , added ) ; 
        for( int i=1 ; i<n-1 ; ++i ){
            added = max( added , gcd( pref[i-1] , suff[i+1] ) ) ; 
        }
        rs *= added ; 
        cout << rs << '\n' ; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1; 
    while (t--) {
        solve();
    }
    return 0;
}