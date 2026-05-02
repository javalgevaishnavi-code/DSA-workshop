#include<bits/stdc++.h>
 using namespace std;
 void MaxMin(vector<int>&arr){
    int n=arr.size();
    int max=arr[0], min=arr[0];
    for(int i=0; i<n ; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
         if(arr[i]<min){
        min=arr[i];
        }
    }
       cout<<"max"<<" "<<max<<" "<<"min"<<" "<<min;

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    MaxMin(arr);
    
}