#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main(){
    float s1 ,s2,s3,s4,s5,cgpa,total;
    
    cout<<"enter marks of english";
    cin>>s1;
    cout<<"enter marks of maths";
    cin>>s2;
    cout<<"enter marks of hindi";
    cin>>s3;
    cout<<"enter marks of evs";
    cin>>s4;
    cout<<"enter marks of science";
    cin>>s5;
    cgpa=((s1+s2+s3+s4+s5)/50);
    total=(s1+s2+s3+s4+s5); 
    string a ;   
    if(cgpa <5.5){
         a = "fail";
    } 
    else if(cgpa >5.5 && cgpa <6.5){
         a = "3rd_div";
    }
    else if(cgpa <7.5 && cgpa > 6.5){
         a = "2nd_div";
    }    
    else{
         a = "1st_div";
    }             
    system("cls");
    cout<<"_________________________________";
    cout<<"\n|  subject name |\tmarks \t|\n";
    cout<<"|_______________________________|";
    cout<<"\n|    english    |"<<"\t"<<s1<<"\t|";
    cout<<"\n|     maths     |"<<"\t"<<s2<<"\t|";
    cout<<"\n|     hindi     |"<<"\t"<<s3<<"\t|";
    cout<<"\n|      evs      |"<<"\t"<<s4<<"\t|";
    cout<<"\n|    science    |"<<"\t"<<s5<<"\t|\n";
    cout<<"|_______________________________|";
    cout<<"\n|     total     |"<<"\t"<<total<<"\t|";
    cout<<"\n|     cgpa      |"<<"\t"<<cgpa<< "\t|";
    cout<<"\n|     remark    |"<<"\t"<<a<<"\t|\n";
    cout<<"|_______________________________|";
    //getch();

}