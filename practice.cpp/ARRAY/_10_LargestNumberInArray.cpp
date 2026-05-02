#include<bits/stdc++.h>
 using namespace std;
 int largestNumberInArray(vector<int>&arr){
    int n=arr.size();
    int largest=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        // return largest;

    }
    return largest;
 }
 int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    cout<<largestNumberInArray(arr);
 }