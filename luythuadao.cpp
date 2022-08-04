#include<bits/stdc++.h>
using namespace std;
const long long c=1e9+7;
long long luythua(long long n, long long k){
	if(k==0 || n==1) return 1;
	if(k%2==0){
		long long s= luythua(n,k/2);
		return s*s %c;
	}
	else {
		long long s= luythua(n,k-1);
		return n*s %c;
	}
}
long long chuyen(long long n){
	long long s=0;
	while(n!=0){
		int p=n%10;
		s=s*10+p;
		n/=10;
	}
	return s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	long long n,k;
	cin>>n;
	k=chuyen(n);
	cout<<luythua(n,k)<<endl;
	}
}
