#include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());// if we want to sort only starting 3 elements then sort(arr.begin(),arr.begin()+3)
    // and we want to sort last 3 elements only then sort(arr.begin()+3,arr.end())
    for(int i=0 ; i<n ; i++){
        cout<< arr[i] <<" ";
    }
 }