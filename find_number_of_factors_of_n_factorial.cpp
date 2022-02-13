#include<bits/stdc++.h>
using namespace std;
#define N 500000;


int main(){
  int n;cin>>n;
  vector<bool> Primes (n+1, 1);
  Primes[0] = 0;
  Primes[1] = 0;
  for(int i = 2;i*i<=n;i++){
   // cout<<i<<endl;
    for(int j = i*i;j<=n;j+=i){
      //cout<<"in for "<<Primes[j]<<endl;
      if(Primes[i]==1){
        Primes[j] = 0;
      }
    }
  }
  //   for(int i = 0;i<n;i++){
  //     cout<<i<<" : "<<Primes[i]<<endl;
  // }
  int i = 2;
  long long ans = 0;
  while(i<=n){
    if(Primes[i]){
      long long t = 1LL*n;
      int cnt = 0;
      long long pi = 1LL*i;
      long long div = 1;
      while(div<t){
        cout<<"num is "<<t<<" and prime is "<<pi<<endl;
        div = div*pi;
        cnt++;
        cout<<"div is "<<div<<" pow "<<cnt<<endl;
      }
      ans += cnt;
      ans++;
      cnt = 1;
      i++;
    }
    else
      continue;
  }
  cout<<ans<<endl;

  return 0;
}