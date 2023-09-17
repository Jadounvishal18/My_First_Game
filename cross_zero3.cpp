#include <iostream>
#include <cstdlib>
using namespace std;
char b[3][3]={NULL};
int count =1;
int game(int value){
  if(count%2!=0){
          char ch='x';
           
           if(value==1){
            return b[0][0]=ch;
           }
           else if(value==2){
             return b[0][1]=ch;
           }
           else if(value==3){
             return b[0][2]=ch;
           }
           else if(value==4){
             return b[1][0]=ch;
           }
           else if(value==5){
             return b[1][1]=ch;
           }
           else if(value==6){
             return b[1][2]=ch;
           }
           else if(value==7){
             return b[2][0]=ch;
           }
           else if(value==8){
             return b[2][1]=ch;
           }
           else if(value==9){
             return b[2][2]=ch;
           }
  }
  else{
    char ch ='o';
           if(value==1){
             return b[0][0]=ch;
           }
           else if(value==2){
             return b[0][1]=ch;
           }
           else if(value==3){
             return b[0][2]=ch;
           }
           else if(value==4){
             return b[1][0]=ch;
           }
           else if(value==5){
             return b[1][1]=ch;
           }
           else if(value==6){
             return b[1][2]=ch;
           }
           else if(value==7){
             return b[2][0]=ch;
           }
           else if(value==8){
             return b[2][1]=ch;
           }
           else if(value==9){
             return b[2][2]=ch;
           }
   }
};
main(){
    int toss,guess;
    string p1,p2;
    cout<<"Enter name of Player1\n";
    cin>>p1;
    cout<<"Enter name of Player2\n";
    cin>>p2;
    toss = rand() % 2 +1;
    cout<<"----------TOSS-----------\n";
    cout<<p1<<" Choose a no among (1,2) \n";
    cin>>guess;
    if(guess==1||guess==2){
       if(toss==guess){
           cout<<"Congratulations "<<p1<<" you won the toss\n";
       }
       else{
           cout<<"Congratulations "<<p2<<" you won the toss\n";
       }
       cout<<"---------GAME BEGINS----------";
       int a[3][3]= { {1, 2, 3} , {4, 5, 6} , {7, 8, 9} };
       cout<<"\nEnter values according to this format\n";
       cout<<endl<<" +---+---+---+\n";
       for(int i=0;i<3;i++){
         for(int j=0;j<3;j++){
             cout<<" | "<<a[i][j];
         }
         cout<<" |";
         cout<<endl<<" +---+---+---+";
         cout<<endl;
       }


         for(int l=0;l<9;l++){
           int value;
           cout<<"enter no";
           cin>>value;
           game(value);
           count++;
           cout<<endl;
           cout<<endl;
           cout<<endl<<" +---+---+---+\n";
           for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
               cout<<" | "<<b[i][j];
               
           }
           cout<<" |";
           cout<<endl<<" +---+---+---+";
           cout<<endl;
           }

         }
    }
    else{
        cout<<"\t    ERROR  \nENTERED VALLUE IS OUT OF CHOICE";
    }
}