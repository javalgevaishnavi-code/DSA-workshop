#include<bits/stdc++.h>
 using namespace std;
 int linearSearch(vector<int> arr, int x){
    for(int i=0; i<arr.size(); i++){
      if(x==arr[i]){
        return i;// return kar aani thamb donhi kaam kart te
      }
    }
    return -1;
 }
 int main(){
    int n,x;
    cin >> n >> x;
    vector<int>arr(n);
    for(int i=0; i<n ; i++){
        cin >> arr[i];
    }
    cout << linearSearch(arr , x);
    

 }