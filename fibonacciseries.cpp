#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    else{
    return fib(n-1) + fib(n-2);
    } 
}
main(){
    int n ,i=0;
    cout<<"enter value ";
    cin>>n;
    while(i < n) {
      cout << " " << fib(i);
      i++;
   }
}
