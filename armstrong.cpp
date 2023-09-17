#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int r, n, sum = 0, temp, count = 1;
    cout<<"Enter value ";
    cin>> n;
    temp = n;
    while (n > 0)
    {
        //r = n % 10;
        n = n / 10;
        count++;

    }153
    while(count>0){
        r*=r;
        count--;
    }
    sum = sum + r;
    if (temp == sum)
     {
        cout<<temp<<"No. is armstrong";
     }
    else{
        cout<<"It is not";
     }
     
    

}