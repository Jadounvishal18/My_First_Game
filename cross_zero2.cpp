#include <iostream>
#include <cstdlib>
using namespace std;
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
       for(int i = 1;i<=9;i++){
         int value,temp;
         if(i%2!=0)
         temp=1;
         else
         temp=2;
         cout<<"\nEnter the choice \n";
         cin>>value;
         a[0][0]=1;
         a[0][1]=2;
         a[0][2]=3;
         a[1][0]=4;
         a[1][1]=5;
         a[1][2]=6;
         a[2][0]=7;
         a[2][1]=8;
         a[2][2]=9;
         switch(value)
         {
          case 1:a[0][0]=temp;
          break;
          case 2:a[0][1]=temp;
          break;
          case 3:a[0][2]=temp;
          break;
          case 4:a[1][0]=temp;
          break;
          case 5:a[1][1]=temp;
          break;
          case 6:a[1][2]=temp;
          break;
          case 7:a[2][0]=temp;
          break;
          case 8:a[2][1]=temp;
          break;
          case 9:a[2][2]=temp;
          break;
          default:cout<<"invalid";
          break;
         }
         for(int k=0;k<3;k++)
    {
        for(int m=0;m<3;m++)
        {cout<<a[k][m];
    }
    }





       }
    }
    
    else{
        cout<<"\t    ERROR  \nENTERED VALLUE IS OUT OF CHOICE";
    }
    
}