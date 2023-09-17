#include <stdio.h>
 int average (int , int , int , int , int );
 int main(){
 int a,b,c,d,e;
 printf("enter values of a,b,c,d,e");
 scanf("%d, %d, %d, %d, %d ",&a,&b,&c,&d,&e);
 
 int result = average(a,b,c,d,e);
  printf("average is = %d",result);
  return 0;
 }
 int average(int x1,int x2,int x3,int x4,int x5)
 {
     int avg;
     avg=(x1+x2+x3+x4+x5)/5;
    //
     return avg;   
 }