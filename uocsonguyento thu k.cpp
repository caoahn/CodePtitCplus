#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
   int t;cin>>t; 
   while(t--){ 
      int n,k;
	  cin>>n>>k; 
	  int cnt=0; 
	  for(int i=2;i<=sqrt(n);i++){ 
	     while(n%i==0){ 
		    cnt++; 
			if(cnt==k){ 
			cout<<i<<endl; 
			break; 
		} 
		n/=i; 
	} 
	if(cnt==k) 
	break; 
} 
   if(n!=1){ 
      cnt++; 
	  if(cnt==k) 
	  cout<<n<<endl; 
	} 
if(cnt<k) cout<<"-1"<<endl; 
} 
}
