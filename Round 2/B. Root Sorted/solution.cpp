#include <iostream>
#include <vector>

using namespace std;

using ll = long long;


int arr[61] ; 

void solve() {
   int n ; cin >> n ; 
   vector<int> arr(n) ; 
   for( int i=0 ; i<n ; ++i ){
       cin >> arr[i] ; 
   }
   int i=0 ; 
   while( i < n && arr[i] < 0 ){
       if( i+1 < n && arr[i+1] < arr[i] ){
           cout << "NO" << endl ; 
           return ; 
       }
       i++ ; 
   }
   while( i<n && arr[i] == 0 ) i++ ; 
   while( i<n && arr[i] == 1 ) i++ ; 
   for ( ; i<n ; ++i ){
       if( arr[i] <= 1 ){
           cout << "NO" << endl ; 
           return ; 
       }
   }
   cout << "YES" << endl ; 
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t ; cin >> t;
    while (t--) {
        solve();
    }
}
