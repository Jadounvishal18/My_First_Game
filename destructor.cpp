#include<iostream>
using namespace std;
class A{
    private :
      int i;
    public:
      A(){
        cout<<"\nconstructor";
      }
      ~A(){
        cout<<"\ndestructor";
      }
};
main()
{
    A obj ;
    cout<<"\nmain";
}