#include<bits/stdc++.h>
 using namespace std;
 int MissingNo(vector<int>&arr){
    int n=arr.size();
    int sum=0;
    for(int i=0; i<n ; i++){
       sum+=arr[i];
    }
    return n*(n+1)/2-sum;
 }
 int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n-1 ; i++){
        cin>>arr[i];
    }
    cout<<MissingNo(arr);
 }