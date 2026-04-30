#include<iostream>
 using namespace std;
 int main(){
    int n,key;
    cin>>n>> key;
    int arr[n];
    for(int i=0; i<n ; i++){
        cin >> arr[i];
    }

    int flag=0;
    for(int i=0 ; i<n ; i++){
        if(key==arr[i]){
        cout<<i;
        flag=1;
        break;// to stop loop 
        }
    }
        if(flag==0)//must be out of loop
        cout<< -1;



        

    

 }
 