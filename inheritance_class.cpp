#include<iostream>
using namespace std;
class b1
{
    protected:
    int i;
    public:
    void get(){
        cout<<"enter i ";
        cin>>i;
    }
};
class b2
{
    protected:
    int j;
    public:
    void get(){
        cout<<"enter j ";
        cin>>j;
    }
};
class d : public b1,b2
{
    public:
    
    void show()
    {
        cout<<"value of i "<<i;
    }
};
main(){
    d obj;
    obj.b1::get();
    obj.show();
}
