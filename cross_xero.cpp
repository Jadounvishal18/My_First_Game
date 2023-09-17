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
    }
    else{
        cout<<"\t    ERROR  \nENTERED VALLUE IS OUT OF CHOICE";
    }

}