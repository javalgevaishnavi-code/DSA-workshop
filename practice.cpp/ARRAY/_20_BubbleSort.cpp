#include<bits/stdc++.h>
 using namespace std;
 void BubbleSort(vector<int>&arr){
    int n=arr.size();
    for(int i=0; i<n ; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j]){
                swap (arr[j],arr[j+1]);
            }
        }
       
    }
   
 }
 int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    BubbleSort(arr);
    for(int it:arr){
        cout<<it<<" ";
    }

 }