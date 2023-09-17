#include<iostream>
using namespace std;
int main(){
    int sum=0,remainder,n,r;
    cin>>n;
    while(n>0){
        remainder=n%10;
        remainder=remainder+1;
        sum=sum*10+remainder;
        n=n/10;
        

    }
    cout<<sum;
    return 0;
}