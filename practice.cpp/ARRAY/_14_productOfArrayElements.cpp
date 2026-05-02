#include<bits/stdc++.h>
 using namespace std;
 int Product(vector<int>&arr){
    int n=arr.size();
    int product=1;
    for(int i=0; i<n ; i++){
        product=product*arr[i];

    }
    return product;
 }
 int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    cout<<Product(arr);
 }