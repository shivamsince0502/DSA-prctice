#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
      cin>>nums[i];
    map<int, int> mp;
    vector<int> Primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97,101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};
    int j = 0;
    while(j<nums.size()){
      for(int i=0;Primes.size();i++){
        if(nums[j]%Primes[i]==0){
          cout<<"primes  : "<<Primes[i]<<endl;
          int pm = Primes[i];
          int cnt = 0;
          int t = nums[j];
          while(t!=1){
            int m = t;
            t = t/pm;
            if(t!=m){
              cnt = 1;
              break;
            }
            cnt++;
            cout<<"power of "<<t<<" is "<<cnt<<endl;
          }
          mp[t] = cnt;
          break;
        }
        else{
          continue;
        }
      }
      j++;
    }
    for(auto it : mp)
      cout<<it.second<<endl;
    return 0;
}