#include<bits/stdc++.h>
 using namespace std;
 void PositiveNegativeCount(vector<int>&arr){
    int n=arr.size();
    int positive=0;
    int negative=0;
    for(int i=0; i<n ; i++){
        if(arr[i]>0){
            positive++;
        }
        else 
        negative++;

    }
    cout<<"positivecount"<<" "<<positive<<" "<<"negativecount"<<" "<<negative;
 }
 int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    PositiveNegativeCount(arr);
 }