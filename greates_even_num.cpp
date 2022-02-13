#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while (t--)
  {
    string s;cin>>s;
    set<int, greater<int>> st;
    int mn = INT_MAX;
    int ecnt  = 0;
    for(int i=0;i<s.length();i++){
      int num = s[i]-'0';
      
      if(num>=0 && num<10){

        st.insert(num);
        if(num%2==0){
          ecnt++;
          mn = min(mn, num);
        }
        else{
          continue;
        }
      }
      else{
        continue;
      }
    }
    if(ecnt){
      for(auto it  = st.begin();it != st.end();it++){
        if(*it==mn)
          continue;
        cout<<*it;
      }
      cout<<mn<<endl;
    }
    else{
      cout<<-1<<endl;
    }
  }
  
  
  
    return 0;
}