#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
        vector<char> vc;
        for(int i =0;i<chars.size();i++){
            char ch = chars[i];
            vc.push_back(ch);
            int cnt = 0;
            int j = i;
           while(j<chars.size()&&ch==chars[j]){
                   cnt++;
                   j++;
           } 
           if(cnt>1){
             string s = to_string(cnt);
                   for(int k=0;k<s.length();k++){
                        vc.push_back(s[k]);
                       }
                       i = i + cnt - 1;
                       cnt = 0;
           }
            
        }
        chars.clear();
        chars = vc;
        /*
        for(int i=0;i<chars.size();i++){
          cout<<chars[i]<<" ";
        }
        cout<<endl;
        */
        
        return chars.size();
    }    

int main(){
  vector<char> vc = {'a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','a','b','b','c','c','c', 'a', 'a'};
  int ans = compress(vc);
  cout<<ans<<endl;
    return 0;
}