#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;cin>>n;
    vector<int> arr;
    int sum = 0;
    int cnt = 0;
    for(int i = 0;i<n;i++) {
        int a;cin>>a;
        if(a&1)
            cnt++;
        sum += a;
        arr.push_back(a);
    }
    cout<<"count is "<<cnt<<" sum is "<<sum<<endl;
    if(sum&1)
        cnt++;
    for(int i = n-1;i>1;i--) {
        sum -= arr[i];
        if(sum&1){
            cout<<"sum at "<<arr[i]<<" is "<<sum<<endl;
            cnt++;
            cout<<"cnt is "<<cnt<<endl;
        }
        else
            continue;
    }
    cout<<cnt<<endl;
    return 0;
}