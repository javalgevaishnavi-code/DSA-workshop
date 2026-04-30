#include<iostream>
 using namespace std;
 int main(){
    int age=18;
    if(age < 0 || age > 100){
        cout<<" invalid age "<< endl;
    }
    else if(age> 18 && age==18){
        cout<<" can drive" << endl;
    }
    else 
    cout<< " cannot drive " << endl;

    

 }