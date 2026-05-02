#include<bits/stdc++.h>
 using namespace std;
 int BinarySearch(vector<int>&arr,int k){
    int n=arr.size();
    int start =0;
    int end=n-1;
    while(start<=end){
    int mid=(end-start)/2;
    
    
        if(arr[mid]==k){
           return mid;
        }
         if(arr[mid]<k){
            start=mid+1;
        }
        else 
        end=mid-1;
    }
    return -1;
 }
 int main(){
    int n;
    cin>>n;
      int k;
    cin>>k;
   
    vector<int>arr(n);
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int it:arr){
        cout<<it<<" ";
    }
  
    cout<<BinarySearch(arr,k);
 }