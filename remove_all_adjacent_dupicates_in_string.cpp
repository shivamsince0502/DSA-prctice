#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
    stack<char> c_stack;
    c_stack.push(s[s.length()-1]);
    int i=s.length()-2;
    while(i>=0){
        if(c_stack.top()==s[i]){
          c_stack.pop();
          i--;
          continue;
        }
        else{
          c_stack.push(s[i]);
          i--;
        }
    }
    string a = "";
    while (!c_stack.empty())
        {
          a += c_stack.top();
          c_stack.pop();
        }
        return a;
}

int main(){
  int t;cin>>t;
  while(t--){
    string s;
    cin>>s;
    string st = removeDuplicates(s);
    cout<<st<<endl;
  }
    
    return 0;
}