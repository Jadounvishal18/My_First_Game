#include<iostream>
using namespace std;
main(){
    int n,sum=0;
    cout<<"enter nth value";
    cin>>n;
    while(n>0){
        sum = sum + n;
        n--;
    }
    cout<<"sum of n natural no is"<<sum;

}