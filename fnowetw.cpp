#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		
	}
	sort(a, a+n);
	long long d=0;
	for(int i=0; i<n; i++){
		int it=lower_bound(a+i+1, a+n, k-a[i])-a-1; 
		if(it > i){
		   d+=it-i;
		}
	} 
	
	cout<<d<<endl;
}
