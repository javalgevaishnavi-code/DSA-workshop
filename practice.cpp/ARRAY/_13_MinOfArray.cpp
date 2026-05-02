#include<bits/stdc++.h>
 using namespace std;
 void Min(vector<int>&arr){
    int n=arr.size();
    int min=arr[0];
    for(int i=0; i<n ; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"min"<<" "<< min;
 }
 int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    Min(arr);
 }