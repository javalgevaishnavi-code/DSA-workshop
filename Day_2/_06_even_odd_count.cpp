#include<bits/stdc++.h>
 using namespace std;

 void countOddEven(vector<int> &arr){
    int n=arr.size();
    int evencount =0 , oddcount=0;
    for(int i=0; i<n ; i++){
         if(arr[i]%2==0){
            evencount++;
         }
    
    else{
        oddcount++;
    }
 }
 cout<< oddcount << " " << evencount;
}
 int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    countOddEven(arr);
 }