#include<iostream>
using namespace std;
class B                           //Diamond Space Inheritance........
{
public :                       //Virtual Base Class..............
void display()
{
cout<<"\n Inside Base Class: ";
}
};
class D1 : public virtual B
{
public :
void display()
{
cout<<"\n Inside Derived 1 Class: : ";
}
};

class D2 : public virtual B
{
public :
void display()
{
cout<<"\n Inside Derived 2 Class: : ";
}
};

class D : public D1,D2
{
public :
void show()
{
B::display();
D1::display();
D2::display();
cout<<"\n Inside Derived D Class: : ";
}
};

main()
{
D d;
d.show();
}