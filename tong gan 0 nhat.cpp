#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
     int n ; 
     cin >> n ; 
     int a[n] ; 
     for(int i=0;i<n;i++) { 
        cin >> a[i] ; 
	 } 
	 int min = 1e9 ;  
	 int sum = 0 ; 
	 for(int i= 0 ; i<n-1;i++) { 
	    for(int j=i+1 ; j<n;j++) {  
	       int sum = a[i] + a[j] ; 
	       if(abs(sum) < abs(min)) min = sum ; 
		} 
	 } 
	 cout << min << endl ; 
   }
}
