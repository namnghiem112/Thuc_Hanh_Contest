#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  int n,k;
  cin>>n>>k;
  int mang[n];
  long long dem=0;
  for(int i=0;i<n;i++) cin>>mang[i];
  sort(mang,mang+n);
  for(int i=0;i<n;i++){
    int temp2 = lower_bound(mang+i+1,mang+n,mang[i]+k)-mang;
    dem+=temp2-i-1;
    }
    cout<<dem<<endl;
  }
}
