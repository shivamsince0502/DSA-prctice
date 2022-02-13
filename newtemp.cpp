#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(char str[], int n) {
    int l = 0, r = n-1;
    
    while(l<r){
      cout<<l<<" "<<r<<endl;
      cout<<"str[l] "<<str[l]<<" str[r] "<<str[r]<<endl;
        if(str[l]!=str[r]){
            return false;
        }
        l++;r--;
    }
    // Write your code here
}

int main(){
  char arr[9] = {'m', 'a', 'l', 'a', 'y', 'a', 'l', 'a', 'm'};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<size<<endl;
 // bool ans = checkPalindrome(arr, size);
 string s;cin>>s;

  cout<<s<<endl;
    return 0;
}