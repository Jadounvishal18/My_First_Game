#include<iostream>
using namespace std;
void largest_no(int );
int n;
main()
{
    cout<<"enter no values you want to enter";
    cin>>n;
    largest_no(n);
}
void largest_no(int ){
    
    int a[n];
    for(int i = 0;i<n;i++){
        cout<<"enter values";
        cin>>a[i];
    }
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int large=a[0];
    for(int i = 1;i<n;i++)
    {
        if(large>a[i]){
            continue;
        }
        else if(large<a[i]){
            large=a[i];
        }
        else if(large=a[i]){
            large=a[i];
        }
    }
    cout<<"\nlargest no is "<<large;
};