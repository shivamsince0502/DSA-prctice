#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> arr;
    int sum = 0;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        int a;cin>>a;
        sum+=a;
        arr.push_back(a);
    }
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j = i;j<n;j++){
            sum += arr[j];
            if(sum&1)
                cnt++;
        }
    }
cout<<cnt<<endl;
    return 0;
}