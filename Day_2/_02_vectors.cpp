#include<bits/stdc++.h>
// or include<iostream>
// include<vector> 2 lines

 using namespace std;
 int main(){
    int n;
    cin>>n;
    //int arr[n]==vector<int>arr(n)
    vector<int> arr(n);
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n ; i++){
        cout<< arr[i] << " ";
    }

 }