#include<bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2) {
    sort(s1.begin(), s1.end());
    cout<<s1<<endl;
    for(int i=0;i<s2.length()-s1.length();i++){
      string a = s2.substr(i, s1.length());
      cout<<"a befor sort : "<<a<<endl;
      sort(a.begin(), a.end());
      cout<<"a after sort : "<<a<<endl;
      bool b = a==s1;
      if(b){ 
        cout<<"a==s1 "<<b<<endl;
        return true;
      }
    }        
    return false;
}

int main(){
  int t;cin>>t;
  while (t--)
  {
    string s1, s2;
    cin>>s2>>s2;
    bool ans = checkInclusion(s1, s2);
    cout<<ans<<endl;
  }
    return 0;
}