#include<iostream>
 using namespace std;
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int sec_max=-1;
    for(int i=0; i<n ; i++){
        if(arr[i]>max){
            sec_max=max;
            max=arr[i];
        }
        else if(arr[i]<max && arr[i]>sec_max){
        sec_max=arr[i];
        }

    }
    cout<< max+sec_max;

 }