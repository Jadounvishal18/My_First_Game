#include<stdio.h>
int palindrome(int);
int main(){
    int n;
    printf("enter value of n");
    scanf("%d",&n);
    palindrome(n);
}
int palindrome(int n)
{
    int sum=0,temp,r;
    printf("\n%d",n,"\n");
    temp=n;

    printf("\n%d",temp);
    printf("\n");
    while(n>0){
        r=n%10;
        sum=((sum*10)+r);
        n=n/10;
    }
    printf("\n%d",sum);
    if(sum==temp)
    {
    printf("\npalindrome");  
    }
    else
    printf("\nnot palindrome");
    return 0;
}