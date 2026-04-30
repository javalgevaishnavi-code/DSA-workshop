#include<bits/stdc++.h>
 using namespace std;
 // no return , no parameter 
  void sum(){
    int a,b;
    cin >> a >> b ;
    cout << a+b << endl;
  }
  // no return , with parameter 
  void sum1(int x , int y){
  cout << x+y << endl;
  }
   // with return , no parameter
    int sub(){
      int a,b;
      cin >> a >> b;
      return a-b;
    }
    // with return with parameter 
    int product(int p , int q ){
      return p*q ;
    }
   
  int main(){
  sum();
  // sum1(9,8); can do like this also
  int x,y;
   cin >> x >> y;

    sum1(x,y) ;
   
     int subtract=sub();
     cout<< subtract ;

     int p ,q;
     cin>> p >> q;
     cout<< p*q;
  }