#include <iostream>
#include <cstdlib>
using namespace std;
char b[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
int c[9]={1,2,3,4,5,6,7,8,9};      //to check that element should not repeat
int a[3][3]= { {1, 2, 3} , {4, 5, 6} , {7, 8, 9} };
int count =1;
string p1,p2;
void clear(){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      b[i][j]=' ';
    }
  }
}
int game(int value){     //ye wala x and o print karane ke liye h
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
void cross_zero(){       //ye wala har baar matrix print karwane ke liye aur winner show karne ke liye h 
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
           if((b[0][0]=='x'&&b[0][1]=='x'&&b[0][2]=='x')||(b[1][0]=='x'&&b[1][1]=='x'&&b[1][2]=='x')||(b[2][0]=='x'&&b[2][1]=='x'&&b[2][2]=='x')||(b[0][0]=='x'&&b[1][0]=='x'&&b[2][0]=='x')||(b[0][1]=='x'&&b[1][1]=='x'&&b[2][1]=='x')||(b[0][2]=='x'&&b[1][2]=='x'&&b[2][2]=='x')||(b[0][0]=='x'&&b[1][1]=='x'&&b[2][2]=='x')||(b[0][2]=='x'&&b[1][1]=='x'&&b[2][0]=='x')){
            cout<<endl<<p1<<" WINS";
            cout<<endl<<"\n--------------GAME ENDS----------------\n";
            break;
           }
           else if((b[0][0]=='o'&&b[0][1]=='o'&&b[0][2]=='o')||(b[1][0]=='o'&&b[1][1]=='o'&&b[1][2]=='o')||(b[2][0]=='o'&&b[2][1]=='o'&&b[2][2]=='o')||(b[0][0]=='o'&&b[1][0]=='o'&&b[2][0]=='o')||(b[0][1]=='o'&&b[1][1]=='o'&&b[2][1]=='o')||(b[0][2]=='o'&&b[1][2]=='o'&&b[2][2]=='o')||(b[0][0]=='o'&&b[1][1]=='o'&&b[2][2]=='o')||(b[0][2]=='o'&&b[1][1]=='o'&&b[2][0]=='o')){
            cout<<endl<<p2<<" WINS";
            cout<<endl<<"\n--------------GAME ENDS----------------\n";
            break;
           }
           else{
            continue;
           }
    }
};
main(){
    int toss,guess;
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
       cross_zero();
       
       char ans;
       cout<<"do you want to play \n";
       cout<<"enter y if yes n for no\n";
       cin>>ans;
       if(ans=='y'){
        while(ans=='y'){
          clear();
          count=1;
          cross_zero();
          cout<<"do you want to play \n";
          cout<<"enter y if yes n for no\n";
          cin>>ans;
        }
        if(ans=='n'){
         cout<<"\n-------------Thankyou for playing---------------";
       }else{
        cout<<"\t    ERROR  \nENTERED VALUE IS OUT OF CHOICE";
       }
       }else if(ans=='n'){
        cout<<"\n-------------Thankyou for playing---------------";
       }else{
        cout<<"\t    ERROR  \nENTERED VALUE IS OUT OF CHOICE";
       }
         
      //  }else{
          
      //   }
      //  for(int i=0;i<3;i++){     //ek baar hi run ho raha h bus ye
      //    for(int j=0;j<3;j++){      // third time game me output nhi de rahi ye line
      //        b[i][j]=' ';
      //    }
      //  }
    // cout<<(ans=='y')<<"y =y hai \n";
    //    if(ans=='y'){
    //   //   for(int i=0;i<3;i++){     //ek baar hi run ho raha h bus ye
    //   //    for(int j=0;j<3;j++){      // third time game me output nhi de rahi ye line
    //   //        b[i][j]=' ';
    //   //    }
    //   //  }
    //   clear();
    //         count=1;         //if not written here toh count badhta hi jayega aur agar x jeeta toh 1st turn o ki ho jayegi
    //         //char b[3][3] ={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};     //this statement is not working and is required to update and free the array
    //         while(ans!='N'){        //to play again and again
    //         cross_zero();
    //         cout<<"do you want to play again\n";
    //         cin>>ans;
    //       }
    //     }
    //     else{
    //       cout<<"\n-------------Thankyou for playing---------------";
    //     }
    }
    else{
        cout<<"\t    ERROR  \nENTERED VALUE IS OUT OF CHOICE";
    }
}