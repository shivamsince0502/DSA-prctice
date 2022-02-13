#include<bits/stdc++.h>
using namespace std;
int main(){


    vector<int> arr;
    arr.push_back(9);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(0);
    arr.push_back(-1);
    arr.push_back(11);
    vector<int> a(arr.begin(), arr.end());
    // partial_sort(arr.begin(), arr.begin()+2, arr.end());
    // partial_sort(arr.begin()+2, arr.end(), arr.end());
    sort(arr.begin(), arr.begin()+3);
    sort(arr.begin()+3, arr.end());
    for(int i = 0;i < 6; i++) {
        cout<<"arr i "<<arr[i]<<" a i is "<<a[i]<<endl;
    }

    return 0;
}