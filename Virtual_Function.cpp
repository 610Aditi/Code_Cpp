#include<iostream>
using namespace std;
class B
{
public :
void virtual show()
{
cout<<"\n Inside Show function in Base : ";
}
void virtual display()
{
cout<<"\n Inside Display function in Base : ";
}
};

class D : public B
{
public :
void show()
{
cout<<"\n Inside Show of Derived :";   
}
void display()
{
cout<<"\n Inside Display function in Derived : ";
}
};

main()
{
B *ptr;

B Obj1;
D Obj2; 

ptr=& Obj1;

ptr->show();
ptr->display();



ptr=& Obj2;

ptr->show();
ptr->display();
}
