#include <bits/stdc++.h>

using namespace std;

using ll = long long ;  

void solve(){
   ll n ; cin >> n ;
   ll ans = 0 ; 
   for( int i=1 ; i<=10 ; ++i ){
       ll curr = ( n/10 + ( n % 10 >= i ) ) ; 
       if( i == 1 ){
           ans = ( ans + curr ) % 10 ; 
       }else if( i == 2 ){
           ans = ( ans + ( curr/2 )*10 + 4*(curr%2) ) % 10 ; 
       }else if( i == 3 ){
           ans = ( ans + ( curr/2 )*10 + 7*( curr%2 ) ) % 10 ; 
       }else if( i == 4 ){
           ans = ( ans + 6*curr ) % 10 ; 
       }else if( i == 5 ){
           ans = ( ans + 5*curr ) % 10 ; 
       }else if( i == 6 ){
           ans = ( ans + 6*curr ) % 10 ; 
       }else if( i == 7 ){
           ans = ( ans + 10*(curr/2) + 3*(curr%2) ) % 10 ; 
       }else if( i == 8 ){
           ans = ( ans + 10*(curr/2) + 6*(curr%2) ) % 10 ; 
       }else if( i == 9 ){
           ans = ( ans + 9*curr ) % 10 ; 
       }
   }
   
   cout << ans << '\n' ; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1 ; 
    cin >> t ; 
    while( t-- ){
        solve() ; 
    }
}
