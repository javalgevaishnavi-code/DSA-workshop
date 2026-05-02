#include<bits/stdc++.h>
 using namespace std;
 int SecondLargest(vector<int>&arr){
    int n=arr.size();
    int max=arr[0];
    int second_max=-1;
    for(int i=0; i<n ; i++){
        if(arr[i]>max){
            second_max=max;
            max=arr[i];
        }
         if(arr[i]>second_max && arr[i]<max)
         arr[i]=second_max;
        
    }
    return second_max;
    
 }
 int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    cout<<SecondLargest(arr);
 }