#include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    sort(arr.begin()+1, arr.begin()+6);
    for(int i=0; i<n ; i++){
        cout<< arr[i]<<" ";
    }
 }