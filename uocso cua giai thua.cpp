#include<bits/stdc++.h> 
using namespace std ; 
int check(int n,int p) { 
  int cnt = 0;  
  for(int i=p ; i <= n ; i++) { 
    int tmp = i; 
    while(tmp % p == 0) { 
      ++cnt ; 
      tmp /= p ; 
	}
  } 
  return cnt ; 
} 
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
    int n,p ; 
    cin >> n >> p ; 
    cout << check(n,p) << endl ; 
  } 
  return 0 ; 
}
